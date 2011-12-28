/*
  Free Download Manager Copyright (c) 2003-2011 FreeDownloadManager.ORG
*/

#ifndef RTP_H
#define RTP_H

#define RTP_MIN_PACKET_LENGTH 12
#define RTP_MAX_PACKET_LENGTH 1500 

int rtp_init(void);
int rtp_get_codec_info(AVCodecContext *codec, int payload_type);
int rtp_get_payload_type(AVCodecContext *codec);

typedef struct RTPDemuxContext RTPDemuxContext;
typedef struct rtp_payload_data_s rtp_payload_data_s;
RTPDemuxContext *rtp_parse_open(AVFormatContext *s1, AVStream *st, URLContext *rtpc, int payload_type, rtp_payload_data_s *rtp_payload_data);
int rtp_parse_packet(RTPDemuxContext *s, AVPacket *pkt,
                     const uint8_t *buf, int len);
void rtp_parse_close(RTPDemuxContext *s);

extern AVOutputFormat rtp_muxer;
extern AVInputFormat rtp_demuxer;

int rtp_get_local_port(URLContext *h);
int rtp_set_remote_url(URLContext *h, const char *uri);
void rtp_get_file_handles(URLContext *h, int *prtp_fd, int *prtcp_fd);
int rtp_check_and_send_back_rr(RTPDemuxContext *s, int count);

extern URLProtocol rtp_protocol;

#define RTP_PT_PRIVATE 96
#define RTP_VERSION 2
#define RTP_MAX_SDES 256   

#define RTCP_TX_RATIO_NUM 5
#define RTCP_TX_RATIO_DEN 1000

typedef struct rtp_payload_data_s
{
    int sizelength;
    int indexlength;
    int indexdeltalength;
    int profile_level_id;
    int streamtype;
    int objecttype;
    char *mode;

    
    struct AUHeaders {
        int size;
        int index;
        int cts_flag;
        int cts;
        int dts_flag;
        int dts;
        int rap_flag;
        int streamstate;
    } *au_headers;
    int nb_au_headers;
    int au_headers_length_bytes;
    int cur_au_index;
} rtp_payload_data_t;

typedef struct AVRtpPayloadType_s
{
    int pt;
    const char enc_name[50]; 
    enum CodecType codec_type;
    enum CodecID codec_id;
    int clock_rate;
    int audio_channels;
} AVRtpPayloadType_t;

#if 0
typedef enum {
  RTCP_SR   = 200,
  RTCP_RR   = 201,
  RTCP_SDES = 202,
  RTCP_BYE  = 203,
  RTCP_APP  = 204
} rtcp_type_t;

typedef enum {
  RTCP_SDES_END    =  0,
  RTCP_SDES_CNAME  =  1,
  RTCP_SDES_NAME   =  2,
  RTCP_SDES_EMAIL  =  3,
  RTCP_SDES_PHONE  =  4,
  RTCP_SDES_LOC    =  5,
  RTCP_SDES_TOOL   =  6,
  RTCP_SDES_NOTE   =  7,
  RTCP_SDES_PRIV   =  8,
  RTCP_SDES_IMG    =  9,
  RTCP_SDES_DOOR   = 10,
  RTCP_SDES_SOURCE = 11
} rtcp_sdes_type_t;
#endif

extern AVRtpPayloadType_t AVRtpPayloadTypes[];
#endif 
