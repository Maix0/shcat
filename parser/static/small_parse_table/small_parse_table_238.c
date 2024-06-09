/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_238.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1190(t_small_parse_table_array *v)
{
	v->a[23800] = anon_sym_DQUOTE;
	v->a[23801] = sym_raw_string;
	v->a[23802] = aux_sym_number_token1;
	v->a[23803] = aux_sym_number_token2;
	v->a[23804] = anon_sym_DOLLAR_LBRACE;
	v->a[23805] = anon_sym_DOLLAR_LPAREN;
	v->a[23806] = anon_sym_BQUOTE;
	v->a[23807] = sym_word;
	v->a[23808] = anon_sym_SEMI;
	v->a[23809] = 14;
	v->a[23810] = actions(3);
	v->a[23811] = 1;
	v->a[23812] = sym_comment;
	v->a[23813] = actions(638);
	v->a[23814] = 1;
	v->a[23815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23816] = actions(641);
	v->a[23817] = 1;
	v->a[23818] = anon_sym_DOLLAR;
	v->a[23819] = actions(644);
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = 1;
	v->a[23821] = anon_sym_DQUOTE;
	v->a[23822] = actions(647);
	v->a[23823] = 1;
	v->a[23824] = aux_sym_number_token1;
	v->a[23825] = actions(650);
	v->a[23826] = 1;
	v->a[23827] = aux_sym_number_token2;
	v->a[23828] = actions(653);
	v->a[23829] = 1;
	v->a[23830] = anon_sym_DOLLAR_LBRACE;
	v->a[23831] = actions(656);
	v->a[23832] = 1;
	v->a[23833] = anon_sym_DOLLAR_LPAREN;
	v->a[23834] = actions(659);
	v->a[23835] = 1;
	v->a[23836] = anon_sym_BQUOTE;
	v->a[23837] = actions(662);
	v->a[23838] = 2;
	v->a[23839] = sym_file_descriptor;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = sym_variable_name;
	v->a[23841] = actions(752);
	v->a[23842] = 2;
	v->a[23843] = sym_raw_string;
	v->a[23844] = sym_word;
	v->a[23845] = state(212);
	v->a[23846] = 2;
	v->a[23847] = sym_concatenation;
	v->a[23848] = aux_sym_for_statement_repeat1;
	v->a[23849] = state(431);
	v->a[23850] = 6;
	v->a[23851] = sym_arithmetic_expansion;
	v->a[23852] = sym_string;
	v->a[23853] = sym_number;
	v->a[23854] = sym_simple_expansion;
	v->a[23855] = sym_expansion;
	v->a[23856] = sym_command_substitution;
	v->a[23857] = actions(636);
	v->a[23858] = 19;
	v->a[23859] = anon_sym_PIPE;
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = anon_sym_SEMI_SEMI;
	v->a[23861] = anon_sym_AMP_AMP;
	v->a[23862] = anon_sym_PIPE_PIPE;
	v->a[23863] = anon_sym_LT;
	v->a[23864] = anon_sym_GT;
	v->a[23865] = anon_sym_GT_GT;
	v->a[23866] = anon_sym_AMP_GT;
	v->a[23867] = anon_sym_AMP_GT_GT;
	v->a[23868] = anon_sym_LT_AMP;
	v->a[23869] = anon_sym_GT_AMP;
	v->a[23870] = anon_sym_GT_PIPE;
	v->a[23871] = anon_sym_LT_AMP_DASH;
	v->a[23872] = anon_sym_GT_AMP_DASH;
	v->a[23873] = anon_sym_LT_LT;
	v->a[23874] = anon_sym_LT_LT_DASH;
	v->a[23875] = aux_sym_heredoc_redirect_token1;
	v->a[23876] = anon_sym_AMP;
	v->a[23877] = anon_sym_SEMI;
	v->a[23878] = 5;
	v->a[23879] = actions(3);
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = 1;
	v->a[23881] = sym_comment;
	v->a[23882] = actions(555);
	v->a[23883] = 2;
	v->a[23884] = sym_file_descriptor;
	v->a[23885] = sym_variable_name;
	v->a[23886] = state(212);
	v->a[23887] = 2;
	v->a[23888] = sym_concatenation;
	v->a[23889] = aux_sym_for_statement_repeat1;
	v->a[23890] = state(431);
	v->a[23891] = 6;
	v->a[23892] = sym_arithmetic_expansion;
	v->a[23893] = sym_string;
	v->a[23894] = sym_number;
	v->a[23895] = sym_simple_expansion;
	v->a[23896] = sym_expansion;
	v->a[23897] = sym_command_substitution;
	v->a[23898] = actions(553);
	v->a[23899] = 29;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
