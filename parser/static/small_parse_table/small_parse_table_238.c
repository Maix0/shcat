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
	v->a[23800] = anon_sym_LT_LT;
	v->a[23801] = anon_sym_LT_LT_DASH;
	v->a[23802] = aux_sym_heredoc_redirect_token1;
	v->a[23803] = anon_sym_AMP;
	v->a[23804] = anon_sym_SEMI;
	v->a[23805] = 6;
	v->a[23806] = actions(3);
	v->a[23807] = 1;
	v->a[23808] = sym_comment;
	v->a[23809] = actions(379);
	v->a[23810] = 1;
	v->a[23811] = sym_file_descriptor;
	v->a[23812] = actions(453);
	v->a[23813] = 1;
	v->a[23814] = sym_variable_name;
	v->a[23815] = actions(451);
	v->a[23816] = 2;
	v->a[23817] = aux_sym__simple_variable_name_token1;
	v->a[23818] = aux_sym__multiline_variable_name_token1;
	v->a[23819] = actions(449);
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = 9;
	v->a[23821] = anon_sym_BANG;
	v->a[23822] = anon_sym_DASH;
	v->a[23823] = anon_sym_STAR;
	v->a[23824] = anon_sym_QMARK;
	v->a[23825] = anon_sym_DOLLAR;
	v->a[23826] = anon_sym_POUND;
	v->a[23827] = anon_sym_AT;
	v->a[23828] = anon_sym_0;
	v->a[23829] = anon_sym__;
	v->a[23830] = actions(381);
	v->a[23831] = 22;
	v->a[23832] = anon_sym_PIPE;
	v->a[23833] = anon_sym_AMP_AMP;
	v->a[23834] = anon_sym_PIPE_PIPE;
	v->a[23835] = anon_sym_LT;
	v->a[23836] = anon_sym_GT;
	v->a[23837] = anon_sym_GT_GT;
	v->a[23838] = anon_sym_LT_AMP;
	v->a[23839] = anon_sym_GT_AMP;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = anon_sym_GT_PIPE;
	v->a[23841] = anon_sym_LT_AMP_DASH;
	v->a[23842] = anon_sym_GT_AMP_DASH;
	v->a[23843] = anon_sym_LT_LT;
	v->a[23844] = anon_sym_LT_LT_DASH;
	v->a[23845] = aux_sym_heredoc_redirect_token1;
	v->a[23846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23847] = anon_sym_DQUOTE;
	v->a[23848] = sym_raw_string;
	v->a[23849] = sym_number;
	v->a[23850] = anon_sym_DOLLAR_LBRACE;
	v->a[23851] = anon_sym_DOLLAR_LPAREN;
	v->a[23852] = anon_sym_BQUOTE;
	v->a[23853] = sym_word;
	v->a[23854] = 5;
	v->a[23855] = actions(3);
	v->a[23856] = 1;
	v->a[23857] = sym_comment;
	v->a[23858] = state(715);
	v->a[23859] = 1;
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = sym_concatenation;
	v->a[23861] = actions(790);
	v->a[23862] = 2;
	v->a[23863] = sym_file_descriptor;
	v->a[23864] = sym_variable_name;
	v->a[23865] = state(447);
	v->a[23866] = 5;
	v->a[23867] = sym_arithmetic_expansion;
	v->a[23868] = sym_string;
	v->a[23869] = sym_simple_expansion;
	v->a[23870] = sym_expansion;
	v->a[23871] = sym_command_substitution;
	v->a[23872] = actions(788);
	v->a[23873] = 27;
	v->a[23874] = anon_sym_PIPE;
	v->a[23875] = anon_sym_RPAREN;
	v->a[23876] = anon_sym_SEMI_SEMI;
	v->a[23877] = anon_sym_AMP_AMP;
	v->a[23878] = anon_sym_PIPE_PIPE;
	v->a[23879] = anon_sym_LT;
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = anon_sym_GT;
	v->a[23881] = anon_sym_GT_GT;
	v->a[23882] = anon_sym_LT_AMP;
	v->a[23883] = anon_sym_GT_AMP;
	v->a[23884] = anon_sym_GT_PIPE;
	v->a[23885] = anon_sym_LT_AMP_DASH;
	v->a[23886] = anon_sym_GT_AMP_DASH;
	v->a[23887] = anon_sym_LT_LT;
	v->a[23888] = anon_sym_LT_LT_DASH;
	v->a[23889] = aux_sym_heredoc_redirect_token1;
	v->a[23890] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23891] = anon_sym_AMP;
	v->a[23892] = anon_sym_DOLLAR;
	v->a[23893] = anon_sym_DQUOTE;
	v->a[23894] = sym_raw_string;
	v->a[23895] = sym_number;
	v->a[23896] = anon_sym_DOLLAR_LBRACE;
	v->a[23897] = anon_sym_DOLLAR_LPAREN;
	v->a[23898] = anon_sym_BQUOTE;
	v->a[23899] = sym_word;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
