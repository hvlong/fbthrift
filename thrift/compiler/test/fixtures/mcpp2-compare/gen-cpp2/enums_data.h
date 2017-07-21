/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <array>
#include <cstddef>

#include <thrift/lib/cpp/Thrift.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"

namespace facebook { namespace ns { namespace qwerty {

struct _AnEnumAEnumDataStorage {
  using type = AnEnumA;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<AnEnumA, 1> values = {{
    AnEnumA::FIELDA,
  }};
  static constexpr const std::array<folly::StringPiece, 1> names = {{
    "FIELDA",
  }};
};

}}} // facebook::ns::qwerty
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumA> {
  using storage_type =  ::facebook::ns::qwerty::_AnEnumAEnumDataStorage;
};

}} // apache::thrift
namespace facebook { namespace ns { namespace qwerty {

struct _AnEnumBEnumDataStorage {
  using type = AnEnumB;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<AnEnumB, 1> values = {{
    AnEnumB::FIELDB,
  }};
  static constexpr const std::array<folly::StringPiece, 1> names = {{
    "FIELDB",
  }};
};

}}} // facebook::ns::qwerty
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumB> {
  using storage_type =  ::facebook::ns::qwerty::_AnEnumBEnumDataStorage;
};

}} // apache::thrift
namespace facebook { namespace ns { namespace qwerty {

struct _AnEnumCEnumDataStorage {
  using type = AnEnumC;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<AnEnumC, 1> values = {{
    AnEnumC::FIELDC,
  }};
  static constexpr const std::array<folly::StringPiece, 1> names = {{
    "FIELDC",
  }};
};

}}} // facebook::ns::qwerty
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumC> {
  using storage_type =  ::facebook::ns::qwerty::_AnEnumCEnumDataStorage;
};

}} // apache::thrift
namespace facebook { namespace ns { namespace qwerty {

struct _AnEnumDEnumDataStorage {
  using type = AnEnumD;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<AnEnumD, 1> values = {{
    AnEnumD::FIELDD,
  }};
  static constexpr const std::array<folly::StringPiece, 1> names = {{
    "FIELDD",
  }};
};

}}} // facebook::ns::qwerty
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumD> {
  using storage_type =  ::facebook::ns::qwerty::_AnEnumDEnumDataStorage;
};

}} // apache::thrift
namespace facebook { namespace ns { namespace qwerty {

struct _AnEnumEEnumDataStorage {
  using type = AnEnumE;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<AnEnumE, 1> values = {{
    AnEnumE::FIELDA,
  }};
  static constexpr const std::array<folly::StringPiece, 1> names = {{
    "FIELDA",
  }};
};

}}} // facebook::ns::qwerty
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumE> {
  using storage_type =  ::facebook::ns::qwerty::_AnEnumEEnumDataStorage;
};

}} // apache::thrift
