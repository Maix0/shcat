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
	v->a[56500] = anon_sym_AMP_AMP;
	v->a[56501] = anon_sym_PIPE_PIPE;
	v->a[56502] = anon_sym_LT;
	v->a[56503] = anon_sym_GT;
	v->a[56504] = anon_sym_GT_GT;
	v->a[56505] = anon_sym_AMP_GT;
	v->a[56506] = anon_sym_AMP_GT_GT;
	v->a[56507] = anon_sym_LT_AMP;
	v->a[56508] = anon_sym_GT_AMP;
	v->a[56509] = anon_sym_GT_PIPE;
	v->a[56510] = anon_sym_LT_AMP_DASH;
	v->a[56511] = anon_sym_GT_AMP_DASH;
	v->a[56512] = anon_sym_LT_LT;
	v->a[56513] = anon_sym_LT_LT_DASH;
	v->a[56514] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56515] = anon_sym_AMP;
	v->a[56516] = anon_sym_DOLLAR;
	v->a[56517] = anon_sym_DQUOTE;
	v->a[56518] = sym_raw_string;
	v->a[56519] = aux_sym_number_token1;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = aux_sym_number_token2;
	v->a[56521] = anon_sym_DOLLAR_LBRACE;
	v->a[56522] = anon_sym_DOLLAR_LPAREN;
	v->a[56523] = anon_sym_BQUOTE;
	v->a[56524] = anon_sym_DOLLAR_BQUOTE;
	v->a[56525] = sym_word;
	v->a[56526] = anon_sym_SEMI;
	v->a[56527] = 5;
	v->a[56528] = actions(3);
	v->a[56529] = 1;
	v->a[56530] = sym_comment;
	v->a[56531] = actions(3815);
	v->a[56532] = 1;
	v->a[56533] = sym__special_character;
	v->a[56534] = state(1214);
	v->a[56535] = 1;
	v->a[56536] = aux_sym__literal_repeat1;
	v->a[56537] = actions(3543);
	v->a[56538] = 5;
	v->a[56539] = sym_file_descriptor;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = sym_variable_name;
	v->a[56541] = sym_test_operator;
	v->a[56542] = sym__brace_start;
	v->a[56543] = aux_sym_heredoc_redirect_token1;
	v->a[56544] = actions(3541);
	v->a[56545] = 31;
	v->a[56546] = anon_sym_PIPE;
	v->a[56547] = anon_sym_RPAREN;
	v->a[56548] = anon_sym_SEMI_SEMI;
	v->a[56549] = anon_sym_PIPE_AMP;
	v->a[56550] = anon_sym_AMP_AMP;
	v->a[56551] = anon_sym_PIPE_PIPE;
	v->a[56552] = anon_sym_LT;
	v->a[56553] = anon_sym_GT;
	v->a[56554] = anon_sym_GT_GT;
	v->a[56555] = anon_sym_AMP_GT;
	v->a[56556] = anon_sym_AMP_GT_GT;
	v->a[56557] = anon_sym_LT_AMP;
	v->a[56558] = anon_sym_GT_AMP;
	v->a[56559] = anon_sym_GT_PIPE;
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = anon_sym_LT_AMP_DASH;
	v->a[56561] = anon_sym_GT_AMP_DASH;
	v->a[56562] = anon_sym_LT_LT;
	v->a[56563] = anon_sym_LT_LT_DASH;
	v->a[56564] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56565] = anon_sym_AMP;
	v->a[56566] = anon_sym_DOLLAR;
	v->a[56567] = anon_sym_DQUOTE;
	v->a[56568] = sym_raw_string;
	v->a[56569] = aux_sym_number_token1;
	v->a[56570] = aux_sym_number_token2;
	v->a[56571] = anon_sym_DOLLAR_LBRACE;
	v->a[56572] = anon_sym_DOLLAR_LPAREN;
	v->a[56573] = anon_sym_BQUOTE;
	v->a[56574] = anon_sym_DOLLAR_BQUOTE;
	v->a[56575] = sym_word;
	v->a[56576] = anon_sym_SEMI;
	v->a[56577] = 3;
	v->a[56578] = actions(3);
	v->a[56579] = 1;
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = sym_comment;
	v->a[56581] = actions(3050);
	v->a[56582] = 5;
	v->a[56583] = sym_file_descriptor;
	v->a[56584] = sym__concat;
	v->a[56585] = sym_test_operator;
	v->a[56586] = sym__brace_start;
	v->a[56587] = aux_sym_heredoc_redirect_token1;
	v->a[56588] = actions(3048);
	v->a[56589] = 33;
	v->a[56590] = anon_sym_PIPE;
	v->a[56591] = anon_sym_RPAREN;
	v->a[56592] = anon_sym_SEMI_SEMI;
	v->a[56593] = anon_sym_PIPE_AMP;
	v->a[56594] = anon_sym_AMP_AMP;
	v->a[56595] = anon_sym_PIPE_PIPE;
	v->a[56596] = anon_sym_LT;
	v->a[56597] = anon_sym_GT;
	v->a[56598] = anon_sym_GT_GT;
	v->a[56599] = anon_sym_AMP_GT;
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
