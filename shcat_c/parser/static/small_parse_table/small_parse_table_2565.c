/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2565.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12825(t_small_parse_table_array *v)
{
	v->a[256500] = actions(3);
	v->a[256501] = 1;
	v->a[256502] = sym_comment;
	v->a[256503] = actions(11834);
	v->a[256504] = 1;
	v->a[256505] = sym_file_descriptor;
	v->a[256506] = actions(4692);
	v->a[256507] = 2;
	v->a[256508] = anon_sym_LT_LT;
	v->a[256509] = anon_sym_LT_LT_DASH;
	v->a[256510] = actions(11455);
	v->a[256511] = 2;
	v->a[256512] = ts_builtin_sym_end;
	v->a[256513] = aux_sym_heredoc_redirect_token1;
	v->a[256514] = actions(11481);
	v->a[256515] = 2;
	v->a[256516] = anon_sym_LT_AMP_DASH;
	v->a[256517] = anon_sym_GT_AMP_DASH;
	v->a[256518] = state(4734);
	v->a[256519] = 3;
	small_parse_table_12826(v);
}

void	small_parse_table_12826(t_small_parse_table_array *v)
{
	v->a[256520] = sym_file_redirect;
	v->a[256521] = sym_heredoc_redirect;
	v->a[256522] = aux_sym_redirected_statement_repeat1;
	v->a[256523] = actions(11453);
	v->a[256524] = 7;
	v->a[256525] = anon_sym_SEMI;
	v->a[256526] = anon_sym_PIPE_PIPE;
	v->a[256527] = anon_sym_AMP_AMP;
	v->a[256528] = anon_sym_PIPE;
	v->a[256529] = anon_sym_AMP;
	v->a[256530] = anon_sym_SEMI_SEMI;
	v->a[256531] = anon_sym_PIPE_AMP;
	v->a[256532] = actions(11479);
	v->a[256533] = 8;
	v->a[256534] = anon_sym_LT;
	v->a[256535] = anon_sym_GT;
	v->a[256536] = anon_sym_GT_GT;
	v->a[256537] = anon_sym_AMP_GT;
	v->a[256538] = anon_sym_AMP_GT_GT;
	v->a[256539] = anon_sym_LT_AMP;
	small_parse_table_12827(v);
}

void	small_parse_table_12827(t_small_parse_table_array *v)
{
	v->a[256540] = anon_sym_GT_AMP;
	v->a[256541] = anon_sym_GT_PIPE;
	v->a[256542] = 19;
	v->a[256543] = actions(71);
	v->a[256544] = 1;
	v->a[256545] = sym_comment;
	v->a[256546] = actions(11808);
	v->a[256547] = 1;
	v->a[256548] = anon_sym_LPAREN;
	v->a[256549] = actions(11810);
	v->a[256550] = 1;
	v->a[256551] = aux_sym__c_word_token1;
	v->a[256552] = actions(11812);
	v->a[256553] = 1;
	v->a[256554] = anon_sym_DOLLAR;
	v->a[256555] = actions(11814);
	v->a[256556] = 1;
	v->a[256557] = anon_sym_DQUOTE;
	v->a[256558] = actions(11816);
	v->a[256559] = 1;
	small_parse_table_12828(v);
}

void	small_parse_table_12828(t_small_parse_table_array *v)
{
	v->a[256560] = aux_sym_number_token1;
	v->a[256561] = actions(11818);
	v->a[256562] = 1;
	v->a[256563] = aux_sym_number_token2;
	v->a[256564] = actions(11820);
	v->a[256565] = 1;
	v->a[256566] = anon_sym_DOLLAR_LBRACE;
	v->a[256567] = actions(11822);
	v->a[256568] = 1;
	v->a[256569] = anon_sym_DOLLAR_LPAREN;
	v->a[256570] = actions(11824);
	v->a[256571] = 1;
	v->a[256572] = anon_sym_BQUOTE;
	v->a[256573] = actions(11826);
	v->a[256574] = 1;
	v->a[256575] = anon_sym_DOLLAR_BQUOTE;
	v->a[256576] = actions(11836);
	v->a[256577] = 1;
	v->a[256578] = anon_sym_RPAREN_RPAREN;
	v->a[256579] = state(3285);
	small_parse_table_12829(v);
}

void	small_parse_table_12829(t_small_parse_table_array *v)
{
	v->a[256580] = 1;
	v->a[256581] = sym__c_postfix_expression;
	v->a[256582] = state(3286);
	v->a[256583] = 1;
	v->a[256584] = sym__c_binary_expression;
	v->a[256585] = state(3290);
	v->a[256586] = 1;
	v->a[256587] = sym__c_unary_expression;
	v->a[256588] = state(6665);
	v->a[256589] = 1;
	v->a[256590] = sym__c_expression;
	v->a[256591] = state(6768);
	v->a[256592] = 1;
	v->a[256593] = sym__c_variable_assignment;
	v->a[256594] = actions(11806);
	v->a[256595] = 2;
	v->a[256596] = anon_sym_PLUS_PLUS;
	v->a[256597] = anon_sym_DASH_DASH;
	v->a[256598] = state(3292);
	v->a[256599] = 7;
	small_parse_table_12830(v);
}

/* EOF small_parse_table_2565.c */
