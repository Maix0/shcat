/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_565.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2825(t_small_parse_table_array *v)
{
	v->a[56500] = anon_sym_DOLLAR_LBRACE;
	v->a[56501] = actions(1939);
	v->a[56502] = 1;
	v->a[56503] = anon_sym_DOLLAR_LPAREN;
	v->a[56504] = actions(1941);
	v->a[56505] = 1;
	v->a[56506] = anon_sym_BQUOTE;
	v->a[56507] = actions(1943);
	v->a[56508] = 1;
	v->a[56509] = sym_variable_name;
	v->a[56510] = actions(1925);
	v->a[56511] = 2;
	v->a[56512] = anon_sym_PLUS_PLUS;
	v->a[56513] = anon_sym_DASH_DASH;
	v->a[56514] = actions(1927);
	v->a[56515] = 2;
	v->a[56516] = anon_sym_DASH2;
	v->a[56517] = anon_sym_PLUS2;
	v->a[56518] = actions(1935);
	v->a[56519] = 2;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = sym_number;
	v->a[56521] = aux_sym__simple_variable_name_token1;
	v->a[56522] = state(334);
	v->a[56523] = 3;
	v->a[56524] = sym_string;
	v->a[56525] = sym_simple_expansion;
	v->a[56526] = sym_expansion;
	v->a[56527] = state(369);
	v->a[56528] = 8;
	v->a[56529] = sym__arithmetic_expression;
	v->a[56530] = sym_arithmetic_literal;
	v->a[56531] = sym_arithmetic_binary_expression;
	v->a[56532] = sym_arithmetic_ternary_expression;
	v->a[56533] = sym_arithmetic_unary_expression;
	v->a[56534] = sym_arithmetic_postfix_expression;
	v->a[56535] = sym_arithmetic_parenthesized_expression;
	v->a[56536] = sym_command_substitution;
	v->a[56537] = 3;
	v->a[56538] = actions(3);
	v->a[56539] = 1;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = sym_comment;
	v->a[56541] = actions(970);
	v->a[56542] = 3;
	v->a[56543] = sym_file_descriptor;
	v->a[56544] = sym__concat;
	v->a[56545] = sym_variable_name;
	v->a[56546] = actions(968);
	v->a[56547] = 23;
	v->a[56548] = anon_sym_PIPE;
	v->a[56549] = anon_sym_AMP_AMP;
	v->a[56550] = anon_sym_PIPE_PIPE;
	v->a[56551] = anon_sym_LT;
	v->a[56552] = anon_sym_GT;
	v->a[56553] = anon_sym_GT_GT;
	v->a[56554] = anon_sym_LT_AMP;
	v->a[56555] = anon_sym_GT_AMP;
	v->a[56556] = anon_sym_GT_PIPE;
	v->a[56557] = anon_sym_LT_AMP_DASH;
	v->a[56558] = anon_sym_GT_AMP_DASH;
	v->a[56559] = anon_sym_LT_LT;
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = anon_sym_LT_LT_DASH;
	v->a[56561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56562] = aux_sym_concatenation_token1;
	v->a[56563] = anon_sym_DOLLAR;
	v->a[56564] = anon_sym_DQUOTE;
	v->a[56565] = sym_raw_string;
	v->a[56566] = sym_number;
	v->a[56567] = anon_sym_DOLLAR_LBRACE;
	v->a[56568] = anon_sym_DOLLAR_LPAREN;
	v->a[56569] = anon_sym_BQUOTE;
	v->a[56570] = sym_word;
	v->a[56571] = 15;
	v->a[56572] = actions(870);
	v->a[56573] = 1;
	v->a[56574] = sym_comment;
	v->a[56575] = actions(1921);
	v->a[56576] = 1;
	v->a[56577] = anon_sym_LPAREN;
	v->a[56578] = actions(1923);
	v->a[56579] = 1;
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = anon_sym_BANG;
	v->a[56581] = actions(1929);
	v->a[56582] = 1;
	v->a[56583] = anon_sym_TILDE;
	v->a[56584] = actions(1931);
	v->a[56585] = 1;
	v->a[56586] = anon_sym_DOLLAR;
	v->a[56587] = actions(1933);
	v->a[56588] = 1;
	v->a[56589] = anon_sym_DQUOTE;
	v->a[56590] = actions(1937);
	v->a[56591] = 1;
	v->a[56592] = anon_sym_DOLLAR_LBRACE;
	v->a[56593] = actions(1939);
	v->a[56594] = 1;
	v->a[56595] = anon_sym_DOLLAR_LPAREN;
	v->a[56596] = actions(1941);
	v->a[56597] = 1;
	v->a[56598] = anon_sym_BQUOTE;
	v->a[56599] = actions(1943);
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
