#ifndef __UTILITIES_LOGGER_HH__
#define __UTILITIES_LOGGER_HH__

#include <fmt/core.h>
#include <fmt/color.h>
#include <fmt/chrono.h>

namespace Logs {
    template <class ...Args> 
    auto Succses(char const* m_str, Args && ...args) -> void {
        std::time_t time = std::time(nullptr);
        fmt::print("[{}] [{}], {}\n",
            fmt::format("{:%F %T}", fmt::localtime(time)),
            fmt::format(fg(fmt::color::sky_blue), " INFO "),
            fmt::format(m_str, std::forward<Args>(args)...)
        );
    }

} // namespace Logs

#endif // __UTILITIES_LOGGER_HH__
