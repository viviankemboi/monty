#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - Print pop error message for empty stacks.
 * @line_number: Line number in script where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - Print pint error message for empty stack.
 * @line_number: Line number in Monty bytecode file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - Print monty math function error message
 *                     for stacks/queues smaller than two node.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 * @op: Operation where the error occurred.
 *
 * Return: (EXIT_FAILURE) alway.
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Print division error message for division by 0.
 * @line_number: Line number in Monty bytecode file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Print pchar error message for empty stack
 *               empty stack and non-character value.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 * @message: The corresponding error message to print.
 *
 * Return: (EXIT_FAILURE) alway.
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
