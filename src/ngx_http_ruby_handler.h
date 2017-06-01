/**
 *    Copyright(c) 2016-2017 rryqszq4
 *
 *
 */

#ifndef NGX_HTTP_RUBY_HANDLER_H
#define NGX_HTTP_RUBY_HANDLER_H

#include <nginx.h>
#include <ngx_http.h>

#include "ngx_http_ruby_module.h"

ngx_int_t ngx_http_ruby_content_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_ruby_content_file_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_ruby_content_inline_handler(ngx_http_request_t *r);

#endif