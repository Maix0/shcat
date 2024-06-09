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
	v->a[8701] = anon_sym_LPAREN;
	v->a[8702] = actions(19);
	v->a[8703] = 1;
	v->a[8704] = anon_sym_LBRACE;
	v->a[8705] = actions(63);
	v->a[8706] = 1;
	v->a[8707] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8708] = actions(65);
	v->a[8709] = 1;
	v->a[8710] = anon_sym_DOLLAR;
	v->a[8711] = actions(67);
	v->a[8712] = 1;
	v->a[8713] = anon_sym_DQUOTE;
	v->a[8714] = actions(71);
	v->a[8715] = 1;
	v->a[8716] = aux_sym_number_token1;
	v->a[8717] = actions(73);
	v->a[8718] = 1;
	v->a[8719] = aux_sym_number_token2;
	small_parse_table_436(v);
}

void	small_parse_table_436(t_small_parse_table_array *v)
{
	v->a[8720] = actions(75);
	v->a[8721] = 1;
	v->a[8722] = anon_sym_DOLLAR_LBRACE;
	v->a[8723] = actions(77);
	v->a[8724] = 1;
	v->a[8725] = anon_sym_DOLLAR_LPAREN;
	v->a[8726] = actions(79);
	v->a[8727] = 1;
	v->a[8728] = anon_sym_BQUOTE;
	v->a[8729] = actions(248);
	v->a[8730] = 1;
	v->a[8731] = sym_word;
	v->a[8732] = actions(250);
	v->a[8733] = 1;
	v->a[8734] = anon_sym_BANG;
	v->a[8735] = actions(256);
	v->a[8736] = 1;
	v->a[8737] = sym_raw_string;
	v->a[8738] = actions(258);
	v->a[8739] = 1;
	small_parse_table_437(v);
}

void	small_parse_table_437(t_small_parse_table_array *v)
{
	v->a[8740] = sym_file_descriptor;
	v->a[8741] = actions(260);
	v->a[8742] = 1;
	v->a[8743] = sym_variable_name;
	v->a[8744] = state(141);
	v->a[8745] = 1;
	v->a[8746] = aux_sym__statements_repeat1;
	v->a[8747] = state(175);
	v->a[8748] = 1;
	v->a[8749] = sym_command_name;
	v->a[8750] = state(278);
	v->a[8751] = 1;
	v->a[8752] = sym_variable_assignment;
	v->a[8753] = state(567);
	v->a[8754] = 1;
	v->a[8755] = aux_sym_command_repeat1;
	v->a[8756] = state(582);
	v->a[8757] = 1;
	v->a[8758] = sym_concatenation;
	v->a[8759] = state(712);
	small_parse_table_438(v);
}

void	small_parse_table_438(t_small_parse_table_array *v)
{
	v->a[8760] = 1;
	v->a[8761] = sym_file_redirect;
	v->a[8762] = state(1100);
	v->a[8763] = 1;
	v->a[8764] = sym_pipeline;
	v->a[8765] = state(1196);
	v->a[8766] = 1;
	v->a[8767] = aux_sym_redirected_statement_repeat2;
	v->a[8768] = state(2037);
	v->a[8769] = 1;
	v->a[8770] = sym__statement_not_pipeline;
	v->a[8771] = state(2104);
	v->a[8772] = 1;
	v->a[8773] = sym__statements;
	v->a[8774] = actions(11);
	v->a[8775] = 2;
	v->a[8776] = anon_sym_while;
	v->a[8777] = anon_sym_until;
	v->a[8778] = actions(254);
	v->a[8779] = 2;
	small_parse_table_439(v);
}

void	small_parse_table_439(t_small_parse_table_array *v)
{
	v->a[8780] = anon_sym_LT_AMP_DASH;
	v->a[8781] = anon_sym_GT_AMP_DASH;
	v->a[8782] = state(295);
	v->a[8783] = 6;
	v->a[8784] = sym_arithmetic_expansion;
	v->a[8785] = sym_string;
	v->a[8786] = sym_number;
	v->a[8787] = sym_simple_expansion;
	v->a[8788] = sym_expansion;
	v->a[8789] = sym_command_substitution;
	v->a[8790] = actions(252);
	v->a[8791] = 8;
	v->a[8792] = anon_sym_LT;
	v->a[8793] = anon_sym_GT;
	v->a[8794] = anon_sym_GT_GT;
	v->a[8795] = anon_sym_AMP_GT;
	v->a[8796] = anon_sym_AMP_GT_GT;
	v->a[8797] = anon_sym_LT_AMP;
	v->a[8798] = anon_sym_GT_AMP;
	v->a[8799] = anon_sym_GT_PIPE;
	small_parse_table_440(v);
}

/* EOF small_parse_table_87.c */
