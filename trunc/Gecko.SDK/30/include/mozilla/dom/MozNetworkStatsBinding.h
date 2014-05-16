/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_MozNetworkStatsBinding_h__
#define mozilla_dom_MozNetworkStatsBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Date.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
struct NetworkStatsAlarmOptionsAtoms;
struct NetworkStatsGetOptionsAtoms;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct NetworkStatsAlarmOptions : public DictionaryBase
{
  Optional<Date > mData;
  Optional<Date > mStartTime;

  NetworkStatsAlarmOptions();

protected:
  explicit inline NetworkStatsAlarmOptions(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  NetworkStatsAlarmOptions(const NetworkStatsAlarmOptions&) MOZ_DELETE;
  void operator=(const NetworkStatsAlarmOptions) MOZ_DELETE;

  static bool
  InitIds(JSContext* cx, NetworkStatsAlarmOptionsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastNetworkStatsAlarmOptions : public NetworkStatsAlarmOptions
{
  inline FastNetworkStatsAlarmOptions()
    : NetworkStatsAlarmOptions(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct NetworkStatsGetOptions : public DictionaryBase
{
  Optional<nsString > mAppManifestURL;
  Optional<nsString > mServiceType;

  NetworkStatsGetOptions();

  explicit inline NetworkStatsGetOptions(const NetworkStatsGetOptions& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline NetworkStatsGetOptions(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, NetworkStatsGetOptionsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const NetworkStatsGetOptions& aOther);
};

namespace binding_detail {
struct FastNetworkStatsGetOptions : public NetworkStatsGetOptions
{
  inline FastNetworkStatsGetOptions()
    : NetworkStatsGetOptions(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MozNetworkStatsBinding_h__
