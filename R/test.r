#' @useDynLib pkg, .registration = TRUE
#' @docType package
#' @keywords internal
'_PACKAGE'

#' Test function
#'
#' @param x a vector
#' @return \code{x}
#' @export
test = function (x) {
    utils::head(.Call(c_test, x))
}
