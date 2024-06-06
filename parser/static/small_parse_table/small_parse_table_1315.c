/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1315.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6575(t_small_parse_table_array *v)
{
	v->a[131500] = anon_sym_PIPE_PIPE;
	v->a[131501] = anon_sym_LT;
	v->a[131502] = anon_sym_GT;
	v->a[131503] = anon_sym_GT_GT;
	v->a[131504] = anon_sym_AMP_GT;
	v->a[131505] = anon_sym_AMP_GT_GT;
	v->a[131506] = anon_sym_LT_AMP;
	v->a[131507] = anon_sym_GT_AMP;
	v->a[131508] = anon_sym_GT_PIPE;
	v->a[131509] = anon_sym_LT_AMP_DASH;
	v->a[131510] = anon_sym_GT_AMP_DASH;
	v->a[131511] = sym__special_character;
	v->a[131512] = 3;
	v->a[131513] = actions(3);
	v->a[131514] = 1;
	v->a[131515] = sym_comment;
	v->a[131516] = actions(7284);
	v->a[131517] = 3;
	v->a[131518] = sym_test_operator;
	v->a[131519] = sym__brace_start;
	small_parse_table_6576(v);
}

void	small_parse_table_6576(t_small_parse_table_array *v)
{
	v->a[131520] = aux_sym_heredoc_redirect_token1;
	v->a[131521] = actions(7282);
	v->a[131522] = 12;
	v->a[131523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131524] = anon_sym_DOLLAR;
	v->a[131525] = sym__special_character;
	v->a[131526] = anon_sym_DQUOTE;
	v->a[131527] = sym_raw_string;
	v->a[131528] = aux_sym_number_token1;
	v->a[131529] = aux_sym_number_token2;
	v->a[131530] = anon_sym_DOLLAR_LBRACE;
	v->a[131531] = anon_sym_DOLLAR_LPAREN;
	v->a[131532] = anon_sym_BQUOTE;
	v->a[131533] = anon_sym_DOLLAR_BQUOTE;
	v->a[131534] = sym_word;
	v->a[131535] = 7;
	v->a[131536] = actions(3);
	v->a[131537] = 1;
	v->a[131538] = sym_comment;
	v->a[131539] = actions(7520);
	small_parse_table_6577(v);
}

void	small_parse_table_6577(t_small_parse_table_array *v)
{
	v->a[131540] = 1;
	v->a[131541] = anon_sym_PERCENT;
	v->a[131542] = actions(7528);
	v->a[131543] = 1;
	v->a[131544] = anon_sym_RBRACE3;
	v->a[131545] = state(3929);
	v->a[131546] = 1;
	v->a[131547] = sym__expansion_regex;
	v->a[131548] = state(3930);
	v->a[131549] = 1;
	v->a[131550] = sym__expansion_expression;
	v->a[131551] = actions(7522);
	v->a[131552] = 3;
	v->a[131553] = sym__immediate_double_hash;
	v->a[131554] = anon_sym_POUND;
	v->a[131555] = anon_sym_PERCENT_PERCENT;
	v->a[131556] = actions(7526);
	v->a[131557] = 8;
	v->a[131558] = anon_sym_COLON_DASH;
	v->a[131559] = anon_sym_DASH3;
	small_parse_table_6578(v);
}

void	small_parse_table_6578(t_small_parse_table_array *v)
{
	v->a[131560] = anon_sym_COLON_EQ;
	v->a[131561] = anon_sym_EQ2;
	v->a[131562] = anon_sym_COLON_QMARK;
	v->a[131563] = anon_sym_QMARK2;
	v->a[131564] = anon_sym_COLON_PLUS;
	v->a[131565] = anon_sym_PLUS3;
	v->a[131566] = 6;
	v->a[131567] = actions(3);
	v->a[131568] = 1;
	v->a[131569] = sym_comment;
	v->a[131570] = actions(7532);
	v->a[131571] = 1;
	v->a[131572] = anon_sym_DQUOTE;
	v->a[131573] = actions(7534);
	v->a[131574] = 1;
	v->a[131575] = sym_string_content;
	v->a[131576] = actions(7538);
	v->a[131577] = 1;
	v->a[131578] = sym_variable_name;
	v->a[131579] = actions(7536);
	small_parse_table_6579(v);
}

void	small_parse_table_6579(t_small_parse_table_array *v)
{
	v->a[131580] = 2;
	v->a[131581] = aux_sym__simple_variable_name_token1;
	v->a[131582] = aux_sym__multiline_variable_name_token1;
	v->a[131583] = actions(7530);
	v->a[131584] = 9;
	v->a[131585] = anon_sym_BANG;
	v->a[131586] = anon_sym_DASH;
	v->a[131587] = anon_sym_STAR;
	v->a[131588] = anon_sym_QMARK;
	v->a[131589] = anon_sym_DOLLAR;
	v->a[131590] = anon_sym_POUND;
	v->a[131591] = anon_sym_AT;
	v->a[131592] = anon_sym_0;
	v->a[131593] = anon_sym__;
	v->a[131594] = 6;
	v->a[131595] = actions(3);
	v->a[131596] = 1;
	v->a[131597] = sym_comment;
	v->a[131598] = actions(7534);
	v->a[131599] = 1;
	small_parse_table_6580(v);
}

/* EOF small_parse_table_1315.c */
