/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_70.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_350(t_small_parse_table_array *v)
{
	v->a[7000] = anon_sym_GT;
	v->a[7001] = anon_sym_LT_LT;
	v->a[7002] = anon_sym_GT_GT;
	v->a[7003] = anon_sym_esac;
	v->a[7004] = anon_sym_SEMI_SEMI;
	v->a[7005] = anon_sym_SEMI_AMP;
	v->a[7006] = anon_sym_SEMI_SEMI_AMP;
	v->a[7007] = anon_sym_PIPE_AMP;
	v->a[7008] = anon_sym_AMP_GT;
	v->a[7009] = anon_sym_AMP_GT_GT;
	v->a[7010] = anon_sym_LT_AMP;
	v->a[7011] = anon_sym_GT_AMP;
	v->a[7012] = anon_sym_GT_PIPE;
	v->a[7013] = anon_sym_LT_AMP_DASH;
	v->a[7014] = anon_sym_GT_AMP_DASH;
	v->a[7015] = anon_sym_LT_LT_DASH;
	v->a[7016] = aux_sym_heredoc_redirect_token1;
	v->a[7017] = anon_sym_LT_LT_LT;
	v->a[7018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7019] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_351(v);
}

void	small_parse_table_351(t_small_parse_table_array *v)
{
	v->a[7020] = sym__special_character;
	v->a[7021] = sym_raw_string;
	v->a[7022] = sym_ansi_c_string;
	v->a[7023] = aux_sym_number_token1;
	v->a[7024] = aux_sym_number_token2;
	v->a[7025] = anon_sym_DOLLAR_LBRACE;
	v->a[7026] = anon_sym_DOLLAR_LPAREN;
	v->a[7027] = anon_sym_BQUOTE;
	v->a[7028] = anon_sym_DOLLAR_BQUOTE;
	v->a[7029] = anon_sym_LT_LPAREN;
	v->a[7030] = anon_sym_GT_LPAREN;
	v->a[7031] = sym_word;
	v->a[7032] = 22;
	v->a[7033] = actions(3);
	v->a[7034] = 1;
	v->a[7035] = sym_comment;
	v->a[7036] = actions(2444);
	v->a[7037] = 1;
	v->a[7038] = anon_sym_DOLLAR_LBRACK;
	v->a[7039] = actions(2447);
	small_parse_table_352(v);
}

void	small_parse_table_352(t_small_parse_table_array *v)
{
	v->a[7040] = 1;
	v->a[7041] = anon_sym_DOLLAR;
	v->a[7042] = actions(2450);
	v->a[7043] = 1;
	v->a[7044] = sym__special_character;
	v->a[7045] = actions(2453);
	v->a[7046] = 1;
	v->a[7047] = anon_sym_DQUOTE;
	v->a[7048] = actions(2456);
	v->a[7049] = 1;
	v->a[7050] = aux_sym_number_token1;
	v->a[7051] = actions(2459);
	v->a[7052] = 1;
	v->a[7053] = aux_sym_number_token2;
	v->a[7054] = actions(2462);
	v->a[7055] = 1;
	v->a[7056] = anon_sym_DOLLAR_LBRACE;
	v->a[7057] = actions(2465);
	v->a[7058] = 1;
	v->a[7059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_353(v);
}

void	small_parse_table_353(t_small_parse_table_array *v)
{
	v->a[7060] = actions(2468);
	v->a[7061] = 1;
	v->a[7062] = anon_sym_BQUOTE;
	v->a[7063] = actions(2471);
	v->a[7064] = 1;
	v->a[7065] = anon_sym_DOLLAR_BQUOTE;
	v->a[7066] = actions(2477);
	v->a[7067] = 1;
	v->a[7068] = aux_sym__simple_variable_name_token1;
	v->a[7069] = actions(2480);
	v->a[7070] = 1;
	v->a[7071] = sym_test_operator;
	v->a[7072] = actions(2483);
	v->a[7073] = 1;
	v->a[7074] = sym__brace_start;
	v->a[7075] = state(1631);
	v->a[7076] = 1;
	v->a[7077] = aux_sym__literal_repeat1;
	v->a[7078] = actions(2437);
	v->a[7079] = 2;
	small_parse_table_354(v);
}

void	small_parse_table_354(t_small_parse_table_array *v)
{
	v->a[7080] = anon_sym_LPAREN_LPAREN;
	v->a[7081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7082] = actions(2442);
	v->a[7083] = 2;
	v->a[7084] = sym_file_descriptor;
	v->a[7085] = aux_sym_heredoc_redirect_token1;
	v->a[7086] = actions(2474);
	v->a[7087] = 2;
	v->a[7088] = anon_sym_LT_LPAREN;
	v->a[7089] = anon_sym_GT_LPAREN;
	v->a[7090] = state(598);
	v->a[7091] = 2;
	v->a[7092] = sym_concatenation;
	v->a[7093] = aux_sym_unset_command_repeat1;
	v->a[7094] = actions(2434);
	v->a[7095] = 3;
	v->a[7096] = sym_raw_string;
	v->a[7097] = sym_ansi_c_string;
	v->a[7098] = sym_word;
	v->a[7099] = state(1190);
	small_parse_table_355(v);
}

/* EOF small_parse_table_70.c */
