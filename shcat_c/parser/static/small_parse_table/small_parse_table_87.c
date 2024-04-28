/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_87.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_435(t_small_parse_table_array *v)
{
	v->a[8700] = 1;
	v->a[8701] = sym__special_character;
	v->a[8702] = actions(2642);
	v->a[8703] = 1;
	v->a[8704] = anon_sym_DQUOTE;
	v->a[8705] = actions(2646);
	v->a[8706] = 1;
	v->a[8707] = aux_sym_number_token1;
	v->a[8708] = actions(2648);
	v->a[8709] = 1;
	v->a[8710] = aux_sym_number_token2;
	v->a[8711] = actions(2650);
	v->a[8712] = 1;
	v->a[8713] = anon_sym_DOLLAR_LBRACE;
	v->a[8714] = actions(2652);
	v->a[8715] = 1;
	v->a[8716] = anon_sym_DOLLAR_LPAREN;
	v->a[8717] = actions(2654);
	v->a[8718] = 1;
	v->a[8719] = anon_sym_BQUOTE;
	small_parse_table_436(v);
}

void	small_parse_table_436(t_small_parse_table_array *v)
{
	v->a[8720] = actions(2656);
	v->a[8721] = 1;
	v->a[8722] = anon_sym_DOLLAR_BQUOTE;
	v->a[8723] = actions(2660);
	v->a[8724] = 1;
	v->a[8725] = sym_test_operator;
	v->a[8726] = actions(2662);
	v->a[8727] = 1;
	v->a[8728] = sym__bare_dollar;
	v->a[8729] = actions(2664);
	v->a[8730] = 1;
	v->a[8731] = sym__brace_start;
	v->a[8732] = state(752);
	v->a[8733] = 1;
	v->a[8734] = aux_sym_command_repeat2;
	v->a[8735] = state(2417);
	v->a[8736] = 1;
	v->a[8737] = aux_sym__literal_repeat1;
	v->a[8738] = state(2558);
	v->a[8739] = 1;
	small_parse_table_437(v);
}

void	small_parse_table_437(t_small_parse_table_array *v)
{
	v->a[8740] = sym_concatenation;
	v->a[8741] = state(2562);
	v->a[8742] = 1;
	v->a[8743] = sym_herestring_redirect;
	v->a[8744] = state(5656);
	v->a[8745] = 1;
	v->a[8746] = sym_subshell;
	v->a[8747] = actions(2630);
	v->a[8748] = 2;
	v->a[8749] = anon_sym_LPAREN_LPAREN;
	v->a[8750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8751] = actions(2632);
	v->a[8752] = 2;
	v->a[8753] = anon_sym_EQ_EQ;
	v->a[8754] = anon_sym_EQ_TILDE;
	v->a[8755] = actions(2644);
	v->a[8756] = 2;
	v->a[8757] = sym_raw_string;
	v->a[8758] = sym_ansi_c_string;
	v->a[8759] = actions(2658);
	small_parse_table_438(v);
}

void	small_parse_table_438(t_small_parse_table_array *v)
{
	v->a[8760] = 2;
	v->a[8761] = anon_sym_LT_LPAREN;
	v->a[8762] = anon_sym_GT_LPAREN;
	v->a[8763] = actions(1440);
	v->a[8764] = 7;
	v->a[8765] = anon_sym_PIPE;
	v->a[8766] = anon_sym_LT;
	v->a[8767] = anon_sym_GT;
	v->a[8768] = anon_sym_LT_LT;
	v->a[8769] = anon_sym_AMP_GT;
	v->a[8770] = anon_sym_LT_AMP;
	v->a[8771] = anon_sym_GT_AMP;
	v->a[8772] = state(2211);
	v->a[8773] = 9;
	v->a[8774] = sym_arithmetic_expansion;
	v->a[8775] = sym_brace_expression;
	v->a[8776] = sym_string;
	v->a[8777] = sym_translated_string;
	v->a[8778] = sym_number;
	v->a[8779] = sym_simple_expansion;
	small_parse_table_439(v);
}

void	small_parse_table_439(t_small_parse_table_array *v)
{
	v->a[8780] = sym_expansion;
	v->a[8781] = sym_command_substitution;
	v->a[8782] = sym_process_substitution;
	v->a[8783] = actions(1442);
	v->a[8784] = 10;
	v->a[8785] = sym_file_descriptor;
	v->a[8786] = anon_sym_PIPE_PIPE;
	v->a[8787] = anon_sym_AMP_AMP;
	v->a[8788] = anon_sym_GT_GT;
	v->a[8789] = anon_sym_PIPE_AMP;
	v->a[8790] = anon_sym_AMP_GT_GT;
	v->a[8791] = anon_sym_GT_PIPE;
	v->a[8792] = anon_sym_LT_AMP_DASH;
	v->a[8793] = anon_sym_GT_AMP_DASH;
	v->a[8794] = anon_sym_LT_LT_DASH;
	v->a[8795] = 37;
	v->a[8796] = actions(13);
	v->a[8797] = 1;
	v->a[8798] = anon_sym_LPAREN_LPAREN;
	v->a[8799] = actions(19);
	small_parse_table_440(v);
}

/* EOF small_parse_table_87.c */
