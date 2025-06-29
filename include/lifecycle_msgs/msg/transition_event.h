#ifndef LIFECYCLE_MSGS__MSG__TRANSITION_EVENT_H_
#define LIFECYCLE_MSGS__MSG__TRANSITION_EVENT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

#include "lifecycle_msgs/msg/state.h"
#include "lifecycle_msgs/msg/transition.h"

typedef lifecycles_msgs__msg__State State;
typedef lifecycles_msgs__msg__Transition Transition;

// Define the TransitionEvent message struct
typedef struct TransitionEvent
{
  uint64_t timestamp;  // Timestamp of the event
  Transition transition;  // The transition being described 
  State start_state;  // The state before the transition
  State goal_state;  // The state after the transition
} lifecycle_msgs__msg__TransitionEvent;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__TRANSITION_EVENT_H_