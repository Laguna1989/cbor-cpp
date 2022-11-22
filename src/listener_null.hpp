#ifndef CBORCPP_LISTENER_NULL_HPP
#define CBORCPP_LISTENER_NULL_HPP

#include "listener.h"

namespace cbor {
class listener_null : public cbor::listener {
public:
  void on_integer(int value) override;
  void on_float32(float value) override;
  void on_double(double value) override;
  void on_bytes(unsigned char *data, int size) override;
  void on_string(std::string &str) override;
  void on_array(int size) override;
  void on_map(int size) override;
  void on_tag(unsigned int tag) override;
  void on_special(unsigned int code) override;
  void on_bool(bool b) override;
  void on_null() override;
  void on_undefined() override;
  void on_error(char const *error) override;
};
} // namespace cbor

#endif // CBORCPP_LISTENER_NULL_HPP
