/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2715.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13575(t_small_parse_table_array *v)
{
	v->a[271500] = aux_sym_heredoc_redirect_token1;
	v->a[271501] = actions(12255);
	v->a[271502] = 22;
	v->a[271503] = anon_sym_SEMI;
	v->a[271504] = anon_sym_PIPE_PIPE;
	v->a[271505] = anon_sym_AMP_AMP;
	v->a[271506] = anon_sym_PIPE;
	v->a[271507] = anon_sym_AMP;
	v->a[271508] = anon_sym_LT;
	v->a[271509] = anon_sym_GT;
	v->a[271510] = anon_sym_LT_LT;
	v->a[271511] = anon_sym_GT_GT;
	v->a[271512] = anon_sym_esac;
	v->a[271513] = anon_sym_SEMI_SEMI;
	v->a[271514] = anon_sym_SEMI_AMP;
	v->a[271515] = anon_sym_SEMI_SEMI_AMP;
	v->a[271516] = anon_sym_PIPE_AMP;
	v->a[271517] = anon_sym_AMP_GT;
	v->a[271518] = anon_sym_AMP_GT_GT;
	v->a[271519] = anon_sym_LT_AMP;
	small_parse_table_13576(v);
}

void	small_parse_table_13576(t_small_parse_table_array *v)
{
	v->a[271520] = anon_sym_GT_AMP;
	v->a[271521] = anon_sym_GT_PIPE;
	v->a[271522] = anon_sym_LT_AMP_DASH;
	v->a[271523] = anon_sym_GT_AMP_DASH;
	v->a[271524] = anon_sym_LT_LT_DASH;
	v->a[271525] = 3;
	v->a[271526] = actions(3);
	v->a[271527] = 1;
	v->a[271528] = sym_comment;
	v->a[271529] = actions(5932);
	v->a[271530] = 3;
	v->a[271531] = sym_file_descriptor;
	v->a[271532] = ts_builtin_sym_end;
	v->a[271533] = aux_sym_heredoc_redirect_token1;
	v->a[271534] = actions(5930);
	v->a[271535] = 21;
	v->a[271536] = anon_sym_SEMI;
	v->a[271537] = anon_sym_PIPE_PIPE;
	v->a[271538] = anon_sym_AMP_AMP;
	v->a[271539] = anon_sym_PIPE;
	small_parse_table_13577(v);
}

void	small_parse_table_13577(t_small_parse_table_array *v)
{
	v->a[271540] = anon_sym_AMP;
	v->a[271541] = anon_sym_LT;
	v->a[271542] = anon_sym_GT;
	v->a[271543] = anon_sym_LT_LT;
	v->a[271544] = anon_sym_GT_GT;
	v->a[271545] = anon_sym_RPAREN;
	v->a[271546] = anon_sym_SEMI_SEMI;
	v->a[271547] = anon_sym_PIPE_AMP;
	v->a[271548] = anon_sym_AMP_GT;
	v->a[271549] = anon_sym_AMP_GT_GT;
	v->a[271550] = anon_sym_LT_AMP;
	v->a[271551] = anon_sym_GT_AMP;
	v->a[271552] = anon_sym_GT_PIPE;
	v->a[271553] = anon_sym_LT_AMP_DASH;
	v->a[271554] = anon_sym_GT_AMP_DASH;
	v->a[271555] = anon_sym_LT_LT_DASH;
	v->a[271556] = anon_sym_BQUOTE;
	v->a[271557] = 18;
	v->a[271558] = actions(71);
	v->a[271559] = 1;
	small_parse_table_13578(v);
}

void	small_parse_table_13578(t_small_parse_table_array *v)
{
	v->a[271560] = sym_comment;
	v->a[271561] = actions(12167);
	v->a[271562] = 1;
	v->a[271563] = anon_sym_LPAREN;
	v->a[271564] = actions(12169);
	v->a[271565] = 1;
	v->a[271566] = aux_sym__c_word_token1;
	v->a[271567] = actions(12171);
	v->a[271568] = 1;
	v->a[271569] = anon_sym_DOLLAR;
	v->a[271570] = actions(12173);
	v->a[271571] = 1;
	v->a[271572] = anon_sym_DQUOTE;
	v->a[271573] = actions(12175);
	v->a[271574] = 1;
	v->a[271575] = aux_sym_number_token1;
	v->a[271576] = actions(12177);
	v->a[271577] = 1;
	v->a[271578] = aux_sym_number_token2;
	v->a[271579] = actions(12179);
	small_parse_table_13579(v);
}

void	small_parse_table_13579(t_small_parse_table_array *v)
{
	v->a[271580] = 1;
	v->a[271581] = anon_sym_DOLLAR_LBRACE;
	v->a[271582] = actions(12181);
	v->a[271583] = 1;
	v->a[271584] = anon_sym_DOLLAR_LPAREN;
	v->a[271585] = actions(12183);
	v->a[271586] = 1;
	v->a[271587] = anon_sym_BQUOTE;
	v->a[271588] = actions(12185);
	v->a[271589] = 1;
	v->a[271590] = anon_sym_DOLLAR_BQUOTE;
	v->a[271591] = state(3442);
	v->a[271592] = 1;
	v->a[271593] = sym__c_unary_expression;
	v->a[271594] = state(3443);
	v->a[271595] = 1;
	v->a[271596] = sym__c_binary_expression;
	v->a[271597] = state(3444);
	v->a[271598] = 1;
	v->a[271599] = sym__c_postfix_expression;
	small_parse_table_13580(v);
}

/* EOF small_parse_table_2715.c */
