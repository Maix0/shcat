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
	v->a[56500] = 1;
	v->a[56501] = aux_sym_concatenation_token1;
	v->a[56502] = actions(5082);
	v->a[56503] = 1;
	v->a[56504] = sym__concat;
	v->a[56505] = state(1215);
	v->a[56506] = 1;
	v->a[56507] = aux_sym_concatenation_repeat1;
	v->a[56508] = actions(4554);
	v->a[56509] = 5;
	v->a[56510] = sym_file_descriptor;
	v->a[56511] = sym_test_operator;
	v->a[56512] = sym__bare_dollar;
	v->a[56513] = sym__brace_start;
	v->a[56514] = aux_sym_heredoc_redirect_token1;
	v->a[56515] = actions(4552);
	v->a[56516] = 39;
	v->a[56517] = anon_sym_LPAREN_LPAREN;
	v->a[56518] = anon_sym_SEMI;
	v->a[56519] = anon_sym_PIPE_PIPE;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = anon_sym_AMP_AMP;
	v->a[56521] = anon_sym_PIPE;
	v->a[56522] = anon_sym_AMP;
	v->a[56523] = anon_sym_EQ_EQ;
	v->a[56524] = anon_sym_LT;
	v->a[56525] = anon_sym_GT;
	v->a[56526] = anon_sym_LT_LT;
	v->a[56527] = anon_sym_GT_GT;
	v->a[56528] = anon_sym_SEMI_SEMI;
	v->a[56529] = anon_sym_PIPE_AMP;
	v->a[56530] = anon_sym_EQ_TILDE;
	v->a[56531] = anon_sym_AMP_GT;
	v->a[56532] = anon_sym_AMP_GT_GT;
	v->a[56533] = anon_sym_LT_AMP;
	v->a[56534] = anon_sym_GT_AMP;
	v->a[56535] = anon_sym_GT_PIPE;
	v->a[56536] = anon_sym_LT_AMP_DASH;
	v->a[56537] = anon_sym_GT_AMP_DASH;
	v->a[56538] = anon_sym_LT_LT_DASH;
	v->a[56539] = anon_sym_LT_LT_LT;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56541] = anon_sym_DOLLAR_LBRACK;
	v->a[56542] = anon_sym_DOLLAR;
	v->a[56543] = sym__special_character;
	v->a[56544] = anon_sym_DQUOTE;
	v->a[56545] = sym_raw_string;
	v->a[56546] = sym_ansi_c_string;
	v->a[56547] = aux_sym_number_token1;
	v->a[56548] = aux_sym_number_token2;
	v->a[56549] = anon_sym_DOLLAR_LBRACE;
	v->a[56550] = anon_sym_DOLLAR_LPAREN;
	v->a[56551] = anon_sym_BQUOTE;
	v->a[56552] = anon_sym_DOLLAR_BQUOTE;
	v->a[56553] = anon_sym_LT_LPAREN;
	v->a[56554] = anon_sym_GT_LPAREN;
	v->a[56555] = sym_word;
	v->a[56556] = 3;
	v->a[56557] = actions(3);
	v->a[56558] = 1;
	v->a[56559] = sym_comment;
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = actions(1314);
	v->a[56561] = 7;
	v->a[56562] = sym_file_descriptor;
	v->a[56563] = sym__concat;
	v->a[56564] = sym_test_operator;
	v->a[56565] = sym__bare_dollar;
	v->a[56566] = sym__brace_start;
	v->a[56567] = ts_builtin_sym_end;
	v->a[56568] = aux_sym_heredoc_redirect_token1;
	v->a[56569] = actions(1312);
	v->a[56570] = 40;
	v->a[56571] = anon_sym_LPAREN_LPAREN;
	v->a[56572] = anon_sym_SEMI;
	v->a[56573] = anon_sym_PIPE_PIPE;
	v->a[56574] = anon_sym_AMP_AMP;
	v->a[56575] = anon_sym_PIPE;
	v->a[56576] = anon_sym_AMP;
	v->a[56577] = anon_sym_EQ_EQ;
	v->a[56578] = anon_sym_LT;
	v->a[56579] = anon_sym_GT;
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = anon_sym_LT_LT;
	v->a[56581] = anon_sym_GT_GT;
	v->a[56582] = anon_sym_SEMI_SEMI;
	v->a[56583] = anon_sym_PIPE_AMP;
	v->a[56584] = anon_sym_EQ_TILDE;
	v->a[56585] = anon_sym_AMP_GT;
	v->a[56586] = anon_sym_AMP_GT_GT;
	v->a[56587] = anon_sym_LT_AMP;
	v->a[56588] = anon_sym_GT_AMP;
	v->a[56589] = anon_sym_GT_PIPE;
	v->a[56590] = anon_sym_LT_AMP_DASH;
	v->a[56591] = anon_sym_GT_AMP_DASH;
	v->a[56592] = anon_sym_LT_LT_DASH;
	v->a[56593] = anon_sym_LT_LT_LT;
	v->a[56594] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56595] = anon_sym_DOLLAR_LBRACK;
	v->a[56596] = aux_sym_concatenation_token1;
	v->a[56597] = anon_sym_DOLLAR;
	v->a[56598] = sym__special_character;
	v->a[56599] = anon_sym_DQUOTE;
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
