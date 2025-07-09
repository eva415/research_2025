// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from harvest_interfaces:srv/RecordTopics.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__FUNCTIONS_H_
#define HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "harvest_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "harvest_interfaces/srv/detail/record_topics__struct.h"

/// Initialize srv/RecordTopics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * harvest_interfaces__srv__RecordTopics_Request
 * )) before or use
 * harvest_interfaces__srv__RecordTopics_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Request__init(harvest_interfaces__srv__RecordTopics_Request * msg);

/// Finalize srv/RecordTopics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Request__fini(harvest_interfaces__srv__RecordTopics_Request * msg);

/// Create srv/RecordTopics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * harvest_interfaces__srv__RecordTopics_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
harvest_interfaces__srv__RecordTopics_Request *
harvest_interfaces__srv__RecordTopics_Request__create();

/// Destroy srv/RecordTopics message.
/**
 * It calls
 * harvest_interfaces__srv__RecordTopics_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Request__destroy(harvest_interfaces__srv__RecordTopics_Request * msg);

/// Check for srv/RecordTopics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Request__are_equal(const harvest_interfaces__srv__RecordTopics_Request * lhs, const harvest_interfaces__srv__RecordTopics_Request * rhs);

/// Copy a srv/RecordTopics message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Request__copy(
  const harvest_interfaces__srv__RecordTopics_Request * input,
  harvest_interfaces__srv__RecordTopics_Request * output);

/// Initialize array of srv/RecordTopics messages.
/**
 * It allocates the memory for the number of elements and calls
 * harvest_interfaces__srv__RecordTopics_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Request__Sequence__init(harvest_interfaces__srv__RecordTopics_Request__Sequence * array, size_t size);

/// Finalize array of srv/RecordTopics messages.
/**
 * It calls
 * harvest_interfaces__srv__RecordTopics_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Request__Sequence__fini(harvest_interfaces__srv__RecordTopics_Request__Sequence * array);

/// Create array of srv/RecordTopics messages.
/**
 * It allocates the memory for the array and calls
 * harvest_interfaces__srv__RecordTopics_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
harvest_interfaces__srv__RecordTopics_Request__Sequence *
harvest_interfaces__srv__RecordTopics_Request__Sequence__create(size_t size);

/// Destroy array of srv/RecordTopics messages.
/**
 * It calls
 * harvest_interfaces__srv__RecordTopics_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Request__Sequence__destroy(harvest_interfaces__srv__RecordTopics_Request__Sequence * array);

/// Check for srv/RecordTopics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Request__Sequence__are_equal(const harvest_interfaces__srv__RecordTopics_Request__Sequence * lhs, const harvest_interfaces__srv__RecordTopics_Request__Sequence * rhs);

/// Copy an array of srv/RecordTopics messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Request__Sequence__copy(
  const harvest_interfaces__srv__RecordTopics_Request__Sequence * input,
  harvest_interfaces__srv__RecordTopics_Request__Sequence * output);

/// Initialize srv/RecordTopics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * harvest_interfaces__srv__RecordTopics_Response
 * )) before or use
 * harvest_interfaces__srv__RecordTopics_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Response__init(harvest_interfaces__srv__RecordTopics_Response * msg);

/// Finalize srv/RecordTopics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Response__fini(harvest_interfaces__srv__RecordTopics_Response * msg);

/// Create srv/RecordTopics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * harvest_interfaces__srv__RecordTopics_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
harvest_interfaces__srv__RecordTopics_Response *
harvest_interfaces__srv__RecordTopics_Response__create();

/// Destroy srv/RecordTopics message.
/**
 * It calls
 * harvest_interfaces__srv__RecordTopics_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Response__destroy(harvest_interfaces__srv__RecordTopics_Response * msg);

/// Check for srv/RecordTopics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Response__are_equal(const harvest_interfaces__srv__RecordTopics_Response * lhs, const harvest_interfaces__srv__RecordTopics_Response * rhs);

/// Copy a srv/RecordTopics message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Response__copy(
  const harvest_interfaces__srv__RecordTopics_Response * input,
  harvest_interfaces__srv__RecordTopics_Response * output);

/// Initialize array of srv/RecordTopics messages.
/**
 * It allocates the memory for the number of elements and calls
 * harvest_interfaces__srv__RecordTopics_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Response__Sequence__init(harvest_interfaces__srv__RecordTopics_Response__Sequence * array, size_t size);

/// Finalize array of srv/RecordTopics messages.
/**
 * It calls
 * harvest_interfaces__srv__RecordTopics_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Response__Sequence__fini(harvest_interfaces__srv__RecordTopics_Response__Sequence * array);

/// Create array of srv/RecordTopics messages.
/**
 * It allocates the memory for the array and calls
 * harvest_interfaces__srv__RecordTopics_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
harvest_interfaces__srv__RecordTopics_Response__Sequence *
harvest_interfaces__srv__RecordTopics_Response__Sequence__create(size_t size);

/// Destroy array of srv/RecordTopics messages.
/**
 * It calls
 * harvest_interfaces__srv__RecordTopics_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
void
harvest_interfaces__srv__RecordTopics_Response__Sequence__destroy(harvest_interfaces__srv__RecordTopics_Response__Sequence * array);

/// Check for srv/RecordTopics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Response__Sequence__are_equal(const harvest_interfaces__srv__RecordTopics_Response__Sequence * lhs, const harvest_interfaces__srv__RecordTopics_Response__Sequence * rhs);

/// Copy an array of srv/RecordTopics messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_harvest_interfaces
bool
harvest_interfaces__srv__RecordTopics_Response__Sequence__copy(
  const harvest_interfaces__srv__RecordTopics_Response__Sequence * input,
  harvest_interfaces__srv__RecordTopics_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__FUNCTIONS_H_
