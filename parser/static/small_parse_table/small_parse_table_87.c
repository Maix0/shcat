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
	v->a[8701] = sym_word;
	v->a[8702] = actions(238);
	v->a[8703] = 1;
	v->a[8704] = anon_sym_BANG;
	v->a[8705] = state(140);
	v->a[8706] = 1;
	v->a[8707] = aux_sym__statements_repeat1;
	v->a[8708] = state(189);
	v->a[8709] = 1;
	v->a[8710] = sym_command_name;
	v->a[8711] = state(286);
	v->a[8712] = 1;
	v->a[8713] = sym_variable_assignment;
	v->a[8714] = state(647);
	v->a[8715] = 1;
	v->a[8716] = sym_concatenation;
	v->a[8717] = state(746);
	v->a[8718] = 1;
	v->a[8719] = aux_sym_command_repeat1;
	small_parse_table_436(v);
}

void	small_parse_table_436(t_small_parse_table_array *v)
{
	v->a[8720] = state(905);
	v->a[8721] = 1;
	v->a[8722] = sym_file_redirect;
	v->a[8723] = state(1422);
	v->a[8724] = 1;
	v->a[8725] = sym_pipeline;
	v->a[8726] = state(1429);
	v->a[8727] = 1;
	v->a[8728] = aux_sym_redirected_statement_repeat2;
	v->a[8729] = state(2271);
	v->a[8730] = 1;
	v->a[8731] = sym__statement_not_pipeline;
	v->a[8732] = state(2362);
	v->a[8733] = 1;
	v->a[8734] = sym__statements;
	v->a[8735] = actions(11);
	v->a[8736] = 2;
	v->a[8737] = anon_sym_while;
	v->a[8738] = anon_sym_until;
	v->a[8739] = actions(57);
	small_parse_table_437(v);
}

void	small_parse_table_437(t_small_parse_table_array *v)
{
	v->a[8740] = 2;
	v->a[8741] = anon_sym_LT_AMP_DASH;
	v->a[8742] = anon_sym_GT_AMP_DASH;
	v->a[8743] = actions(65);
	v->a[8744] = 2;
	v->a[8745] = sym_raw_string;
	v->a[8746] = sym_number;
	v->a[8747] = state(394);
	v->a[8748] = 5;
	v->a[8749] = sym_arithmetic_expansion;
	v->a[8750] = sym_string;
	v->a[8751] = sym_simple_expansion;
	v->a[8752] = sym_expansion;
	v->a[8753] = sym_command_substitution;
	v->a[8754] = actions(55);
	v->a[8755] = 8;
	v->a[8756] = anon_sym_LT;
	v->a[8757] = anon_sym_GT;
	v->a[8758] = anon_sym_GT_GT;
	v->a[8759] = anon_sym_AMP_GT;
	small_parse_table_438(v);
}

void	small_parse_table_438(t_small_parse_table_array *v)
{
	v->a[8760] = anon_sym_AMP_GT_GT;
	v->a[8761] = anon_sym_LT_AMP;
	v->a[8762] = anon_sym_GT_AMP;
	v->a[8763] = anon_sym_GT_PIPE;
	v->a[8764] = state(1211);
	v->a[8765] = 12;
	v->a[8766] = sym_redirected_statement;
	v->a[8767] = sym_for_statement;
	v->a[8768] = sym_while_statement;
	v->a[8769] = sym_if_statement;
	v->a[8770] = sym_case_statement;
	v->a[8771] = sym_function_definition;
	v->a[8772] = sym_compound_statement;
	v->a[8773] = sym_subshell;
	v->a[8774] = sym_list;
	v->a[8775] = sym_negated_command;
	v->a[8776] = sym_command;
	v->a[8777] = sym__variable_assignments;
	v->a[8778] = 32;
	v->a[8779] = actions(3);
	small_parse_table_439(v);
}

void	small_parse_table_439(t_small_parse_table_array *v)
{
	v->a[8780] = 1;
	v->a[8781] = sym_comment;
	v->a[8782] = actions(9);
	v->a[8783] = 1;
	v->a[8784] = anon_sym_for;
	v->a[8785] = actions(13);
	v->a[8786] = 1;
	v->a[8787] = anon_sym_if;
	v->a[8788] = actions(15);
	v->a[8789] = 1;
	v->a[8790] = anon_sym_case;
	v->a[8791] = actions(17);
	v->a[8792] = 1;
	v->a[8793] = anon_sym_LPAREN;
	v->a[8794] = actions(19);
	v->a[8795] = 1;
	v->a[8796] = anon_sym_LBRACE;
	v->a[8797] = actions(59);
	v->a[8798] = 1;
	v->a[8799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_440(v);
}

/* EOF small_parse_table_87.c */
