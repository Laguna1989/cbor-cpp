#include "listener_null.hpp"
namespace cbor {
void listener_null::on_integer(int value) {}
void listener_null::on_float32(float value) {}
void listener_null::on_double(double value) {}
void listener_null::on_bytes(unsigned char *data, int size) {}
void listener_null::on_string(std::string &str) {}
void listener_null::on_array(int size) {}
void listener_null::on_map(int size) {}
void listener_null::on_tag(unsigned int tag) {}
void listener_null::on_special(unsigned int code) {}
void listener_null::on_bool(bool b) {}
void listener_null::on_null() {}
void listener_null::on_undefined() {}
void listener_null::on_error(char const *error) {}
} // namespace cbor
