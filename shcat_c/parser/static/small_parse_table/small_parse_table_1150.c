/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1150.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5750(t_small_parse_table_array *v)
{
	v->a[115000] = 11;
	v->a[115001] = anon_sym_LT;
	v->a[115002] = anon_sym_GT;
	v->a[115003] = anon_sym_GT_GT;
	v->a[115004] = anon_sym_AMP_GT;
	v->a[115005] = anon_sym_AMP_GT_GT;
	v->a[115006] = anon_sym_LT_AMP;
	v->a[115007] = anon_sym_GT_AMP;
	v->a[115008] = anon_sym_GT_PIPE;
	v->a[115009] = anon_sym_LT_AMP_DASH;
	v->a[115010] = anon_sym_GT_AMP_DASH;
	v->a[115011] = anon_sym_LT_LT_LT;
	v->a[115012] = actions(5819);
	v->a[115013] = 17;
	v->a[115014] = anon_sym_LPAREN_LPAREN;
	v->a[115015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115016] = anon_sym_DOLLAR_LBRACK;
	v->a[115017] = anon_sym_DOLLAR;
	v->a[115018] = sym__special_character;
	v->a[115019] = anon_sym_DQUOTE;
	small_parse_table_5751(v);
}

void	small_parse_table_5751(t_small_parse_table_array *v)
{
	v->a[115020] = sym_raw_string;
	v->a[115021] = sym_ansi_c_string;
	v->a[115022] = aux_sym_number_token1;
	v->a[115023] = aux_sym_number_token2;
	v->a[115024] = anon_sym_DOLLAR_LBRACE;
	v->a[115025] = anon_sym_DOLLAR_LPAREN;
	v->a[115026] = anon_sym_BQUOTE;
	v->a[115027] = anon_sym_DOLLAR_BQUOTE;
	v->a[115028] = anon_sym_LT_LPAREN;
	v->a[115029] = anon_sym_GT_LPAREN;
	v->a[115030] = sym_word;
	v->a[115031] = 3;
	v->a[115032] = actions(3);
	v->a[115033] = 1;
	v->a[115034] = sym_comment;
	v->a[115035] = actions(1302);
	v->a[115036] = 5;
	v->a[115037] = sym_file_descriptor;
	v->a[115038] = sym__concat;
	v->a[115039] = sym_test_operator;
	small_parse_table_5752(v);
}

void	small_parse_table_5752(t_small_parse_table_array *v)
{
	v->a[115040] = sym__brace_start;
	v->a[115041] = aux_sym_heredoc_redirect_token1;
	v->a[115042] = actions(1300);
	v->a[115043] = 38;
	v->a[115044] = anon_sym_LPAREN_LPAREN;
	v->a[115045] = anon_sym_SEMI;
	v->a[115046] = anon_sym_PIPE_PIPE;
	v->a[115047] = anon_sym_AMP_AMP;
	v->a[115048] = anon_sym_PIPE;
	v->a[115049] = anon_sym_AMP;
	v->a[115050] = anon_sym_LT;
	v->a[115051] = anon_sym_GT;
	v->a[115052] = anon_sym_LT_LT;
	v->a[115053] = anon_sym_GT_GT;
	v->a[115054] = anon_sym_RPAREN;
	v->a[115055] = anon_sym_SEMI_SEMI;
	v->a[115056] = anon_sym_PIPE_AMP;
	v->a[115057] = anon_sym_AMP_GT;
	v->a[115058] = anon_sym_AMP_GT_GT;
	v->a[115059] = anon_sym_LT_AMP;
	small_parse_table_5753(v);
}

void	small_parse_table_5753(t_small_parse_table_array *v)
{
	v->a[115060] = anon_sym_GT_AMP;
	v->a[115061] = anon_sym_GT_PIPE;
	v->a[115062] = anon_sym_LT_AMP_DASH;
	v->a[115063] = anon_sym_GT_AMP_DASH;
	v->a[115064] = anon_sym_LT_LT_DASH;
	v->a[115065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115066] = anon_sym_DOLLAR_LBRACK;
	v->a[115067] = aux_sym_concatenation_token1;
	v->a[115068] = anon_sym_DOLLAR;
	v->a[115069] = sym__special_character;
	v->a[115070] = anon_sym_DQUOTE;
	v->a[115071] = sym_raw_string;
	v->a[115072] = sym_ansi_c_string;
	v->a[115073] = aux_sym_number_token1;
	v->a[115074] = aux_sym_number_token2;
	v->a[115075] = anon_sym_DOLLAR_LBRACE;
	v->a[115076] = anon_sym_DOLLAR_LPAREN;
	v->a[115077] = anon_sym_BQUOTE;
	v->a[115078] = anon_sym_DOLLAR_BQUOTE;
	v->a[115079] = anon_sym_LT_LPAREN;
	small_parse_table_5754(v);
}

void	small_parse_table_5754(t_small_parse_table_array *v)
{
	v->a[115080] = anon_sym_GT_LPAREN;
	v->a[115081] = sym_word;
	v->a[115082] = 26;
	v->a[115083] = actions(71);
	v->a[115084] = 1;
	v->a[115085] = sym_comment;
	v->a[115086] = actions(1131);
	v->a[115087] = 1;
	v->a[115088] = anon_sym_LPAREN;
	v->a[115089] = actions(1141);
	v->a[115090] = 1;
	v->a[115091] = anon_sym_DOLLAR_LBRACK;
	v->a[115092] = actions(1145);
	v->a[115093] = 1;
	v->a[115094] = anon_sym_DOLLAR;
	v->a[115095] = actions(1149);
	v->a[115096] = 1;
	v->a[115097] = anon_sym_DQUOTE;
	v->a[115098] = actions(1153);
	v->a[115099] = 1;
	small_parse_table_5755(v);
}

/* EOF small_parse_table_1150.c */
