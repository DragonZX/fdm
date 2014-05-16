/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_FileBinding_h__
#define mozilla_dom_FileBinding_h__

#include "BlobBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

struct FilePropertyBagAtoms;
class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct FilePropertyBag : public BlobPropertyBag
{
  nsString mName;

  FilePropertyBag();

  explicit inline FilePropertyBag(const FilePropertyBag& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline FilePropertyBag(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, FilePropertyBagAtoms* atomsCache);

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
  operator=(const FilePropertyBag& aOther);
};

namespace binding_detail {
struct FastFilePropertyBag : public FilePropertyBag
{
  inline FastFilePropertyBag()
    : FilePropertyBag(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_FileBinding_h__
