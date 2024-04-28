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
	v->a[131500] = anon_sym_CARET_EQ;
	v->a[131501] = anon_sym_PIPE_EQ;
	v->a[131502] = anon_sym_PIPE_PIPE;
	v->a[131503] = anon_sym_AMP_AMP;
	v->a[131504] = anon_sym_EQ_EQ;
	v->a[131505] = anon_sym_BANG_EQ;
	v->a[131506] = anon_sym_LT_EQ;
	v->a[131507] = anon_sym_GT_EQ;
	v->a[131508] = anon_sym_EQ_TILDE;
	v->a[131509] = anon_sym_QMARK;
	v->a[131510] = 3;
	v->a[131511] = actions(71);
	v->a[131512] = 1;
	v->a[131513] = sym_comment;
	v->a[131514] = actions(1296);
	v->a[131515] = 13;
	v->a[131516] = anon_sym_PIPE;
	v->a[131517] = anon_sym_LT;
	v->a[131518] = anon_sym_GT;
	v->a[131519] = anon_sym_LT_LT;
	small_parse_table_6576(v);
}

void	small_parse_table_6576(t_small_parse_table_array *v)
{
	v->a[131520] = anon_sym_AMP_GT;
	v->a[131521] = anon_sym_LT_AMP;
	v->a[131522] = anon_sym_GT_AMP;
	v->a[131523] = anon_sym_DOLLAR;
	v->a[131524] = aux_sym_number_token1;
	v->a[131525] = aux_sym_number_token2;
	v->a[131526] = anon_sym_DOLLAR_LPAREN;
	v->a[131527] = anon_sym_BQUOTE;
	v->a[131528] = sym_word;
	v->a[131529] = actions(1298);
	v->a[131530] = 27;
	v->a[131531] = sym_file_descriptor;
	v->a[131532] = sym__concat;
	v->a[131533] = sym_variable_name;
	v->a[131534] = sym_test_operator;
	v->a[131535] = sym__brace_start;
	v->a[131536] = anon_sym_LPAREN_LPAREN;
	v->a[131537] = anon_sym_PIPE_PIPE;
	v->a[131538] = anon_sym_AMP_AMP;
	v->a[131539] = anon_sym_GT_GT;
	small_parse_table_6577(v);
}

void	small_parse_table_6577(t_small_parse_table_array *v)
{
	v->a[131540] = anon_sym_PIPE_AMP;
	v->a[131541] = anon_sym_AMP_GT_GT;
	v->a[131542] = anon_sym_GT_PIPE;
	v->a[131543] = anon_sym_LT_AMP_DASH;
	v->a[131544] = anon_sym_GT_AMP_DASH;
	v->a[131545] = anon_sym_LT_LT_DASH;
	v->a[131546] = anon_sym_LT_LT_LT;
	v->a[131547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131548] = anon_sym_DOLLAR_LBRACK;
	v->a[131549] = aux_sym_concatenation_token1;
	v->a[131550] = sym__special_character;
	v->a[131551] = anon_sym_DQUOTE;
	v->a[131552] = sym_raw_string;
	v->a[131553] = sym_ansi_c_string;
	v->a[131554] = anon_sym_DOLLAR_LBRACE;
	v->a[131555] = anon_sym_DOLLAR_BQUOTE;
	v->a[131556] = anon_sym_LT_LPAREN;
	v->a[131557] = anon_sym_GT_LPAREN;
	v->a[131558] = 5;
	v->a[131559] = actions(71);
	small_parse_table_6578(v);
}

void	small_parse_table_6578(t_small_parse_table_array *v)
{
	v->a[131560] = 1;
	v->a[131561] = sym_comment;
	v->a[131562] = state(2473);
	v->a[131563] = 1;
	v->a[131564] = aux_sym_concatenation_repeat1;
	v->a[131565] = actions(1143);
	v->a[131566] = 2;
	v->a[131567] = sym__concat;
	v->a[131568] = aux_sym_concatenation_token1;
	v->a[131569] = actions(1273);
	v->a[131570] = 14;
	v->a[131571] = anon_sym_EQ;
	v->a[131572] = anon_sym_PIPE;
	v->a[131573] = anon_sym_CARET;
	v->a[131574] = anon_sym_AMP;
	v->a[131575] = anon_sym_LT;
	v->a[131576] = anon_sym_GT;
	v->a[131577] = anon_sym_LT_LT;
	v->a[131578] = anon_sym_GT_GT;
	v->a[131579] = anon_sym_PLUS;
	small_parse_table_6579(v);
}

void	small_parse_table_6579(t_small_parse_table_array *v)
{
	v->a[131580] = anon_sym_DASH;
	v->a[131581] = anon_sym_STAR;
	v->a[131582] = anon_sym_SLASH;
	v->a[131583] = anon_sym_PERCENT;
	v->a[131584] = anon_sym_STAR_STAR;
	v->a[131585] = actions(1369);
	v->a[131586] = 23;
	v->a[131587] = sym_test_operator;
	v->a[131588] = anon_sym_PLUS_PLUS;
	v->a[131589] = anon_sym_DASH_DASH;
	v->a[131590] = anon_sym_PLUS_EQ;
	v->a[131591] = anon_sym_DASH_EQ;
	v->a[131592] = anon_sym_STAR_EQ;
	v->a[131593] = anon_sym_SLASH_EQ;
	v->a[131594] = anon_sym_PERCENT_EQ;
	v->a[131595] = anon_sym_STAR_STAR_EQ;
	v->a[131596] = anon_sym_LT_LT_EQ;
	v->a[131597] = anon_sym_GT_GT_EQ;
	v->a[131598] = anon_sym_AMP_EQ;
	v->a[131599] = anon_sym_CARET_EQ;
	small_parse_table_6580(v);
}

/* EOF small_parse_table_1315.c */
