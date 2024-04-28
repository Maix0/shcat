/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1525.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7625(t_small_parse_table_array *v)
{
	v->a[152500] = anon_sym_BQUOTE;
	v->a[152501] = anon_sym_DOLLAR_BQUOTE;
	v->a[152502] = anon_sym_LT_LPAREN;
	v->a[152503] = anon_sym_GT_LPAREN;
	v->a[152504] = 3;
	v->a[152505] = actions(71);
	v->a[152506] = 1;
	v->a[152507] = sym_comment;
	v->a[152508] = actions(1320);
	v->a[152509] = 14;
	v->a[152510] = anon_sym_EQ;
	v->a[152511] = anon_sym_PIPE;
	v->a[152512] = anon_sym_CARET;
	v->a[152513] = anon_sym_AMP;
	v->a[152514] = anon_sym_LT;
	v->a[152515] = anon_sym_GT;
	v->a[152516] = anon_sym_LT_LT;
	v->a[152517] = anon_sym_GT_GT;
	v->a[152518] = anon_sym_PLUS;
	v->a[152519] = anon_sym_DASH;
	small_parse_table_7626(v);
}

void	small_parse_table_7626(t_small_parse_table_array *v)
{
	v->a[152520] = anon_sym_STAR;
	v->a[152521] = anon_sym_SLASH;
	v->a[152522] = anon_sym_PERCENT;
	v->a[152523] = anon_sym_STAR_STAR;
	v->a[152524] = actions(1322);
	v->a[152525] = 24;
	v->a[152526] = sym_test_operator;
	v->a[152527] = sym_extglob_pattern;
	v->a[152528] = anon_sym_PLUS_PLUS;
	v->a[152529] = anon_sym_DASH_DASH;
	v->a[152530] = anon_sym_PLUS_EQ;
	v->a[152531] = anon_sym_DASH_EQ;
	v->a[152532] = anon_sym_STAR_EQ;
	v->a[152533] = anon_sym_SLASH_EQ;
	v->a[152534] = anon_sym_PERCENT_EQ;
	v->a[152535] = anon_sym_STAR_STAR_EQ;
	v->a[152536] = anon_sym_LT_LT_EQ;
	v->a[152537] = anon_sym_GT_GT_EQ;
	v->a[152538] = anon_sym_AMP_EQ;
	v->a[152539] = anon_sym_CARET_EQ;
	small_parse_table_7627(v);
}

void	small_parse_table_7627(t_small_parse_table_array *v)
{
	v->a[152540] = anon_sym_PIPE_EQ;
	v->a[152541] = anon_sym_PIPE_PIPE;
	v->a[152542] = anon_sym_AMP_AMP;
	v->a[152543] = anon_sym_EQ_EQ;
	v->a[152544] = anon_sym_BANG_EQ;
	v->a[152545] = anon_sym_LT_EQ;
	v->a[152546] = anon_sym_GT_EQ;
	v->a[152547] = anon_sym_RPAREN;
	v->a[152548] = anon_sym_EQ_TILDE;
	v->a[152549] = anon_sym_QMARK;
	v->a[152550] = 7;
	v->a[152551] = actions(71);
	v->a[152552] = 1;
	v->a[152553] = sym_comment;
	v->a[152554] = actions(5821);
	v->a[152555] = 2;
	v->a[152556] = anon_sym_PIPE;
	v->a[152557] = anon_sym_LT_LT;
	v->a[152558] = actions(5826);
	v->a[152559] = 4;
	small_parse_table_7628(v);
}

void	small_parse_table_7628(t_small_parse_table_array *v)
{
	v->a[152560] = anon_sym_PIPE_PIPE;
	v->a[152561] = anon_sym_AMP_AMP;
	v->a[152562] = anon_sym_PIPE_AMP;
	v->a[152563] = anon_sym_LT_LT_DASH;
	v->a[152564] = actions(5819);
	v->a[152565] = 5;
	v->a[152566] = anon_sym_DOLLAR;
	v->a[152567] = aux_sym_number_token1;
	v->a[152568] = aux_sym_number_token2;
	v->a[152569] = anon_sym_DOLLAR_LPAREN;
	v->a[152570] = sym_word;
	v->a[152571] = actions(5823);
	v->a[152572] = 5;
	v->a[152573] = anon_sym_LT;
	v->a[152574] = anon_sym_GT;
	v->a[152575] = anon_sym_AMP_GT;
	v->a[152576] = anon_sym_LT_AMP;
	v->a[152577] = anon_sym_GT_AMP;
	v->a[152578] = actions(5828);
	v->a[152579] = 7;
	small_parse_table_7629(v);
}

void	small_parse_table_7629(t_small_parse_table_array *v)
{
	v->a[152580] = sym_file_descriptor;
	v->a[152581] = anon_sym_GT_GT;
	v->a[152582] = anon_sym_AMP_GT_GT;
	v->a[152583] = anon_sym_GT_PIPE;
	v->a[152584] = anon_sym_LT_AMP_DASH;
	v->a[152585] = anon_sym_GT_AMP_DASH;
	v->a[152586] = anon_sym_LT_LT_LT;
	v->a[152587] = actions(5831);
	v->a[152588] = 15;
	v->a[152589] = sym_variable_name;
	v->a[152590] = sym_test_operator;
	v->a[152591] = sym__brace_start;
	v->a[152592] = anon_sym_LPAREN_LPAREN;
	v->a[152593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[152594] = anon_sym_DOLLAR_LBRACK;
	v->a[152595] = sym__special_character;
	v->a[152596] = anon_sym_DQUOTE;
	v->a[152597] = sym_raw_string;
	v->a[152598] = sym_ansi_c_string;
	v->a[152599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_7630(v);
}

/* EOF small_parse_table_1525.c */
