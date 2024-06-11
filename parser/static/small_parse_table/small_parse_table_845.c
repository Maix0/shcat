/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_845.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4225(t_small_parse_table_array *v)
{
	v->a[84500] = aux_sym_heredoc_redirect_token1;
	v->a[84501] = state(2313);
	v->a[84502] = 1;
	v->a[84503] = sym__heredoc_expression;
	v->a[84504] = actions(876);
	v->a[84505] = 2;
	v->a[84506] = anon_sym_AMP_AMP;
	v->a[84507] = anon_sym_PIPE_PIPE;
	v->a[84508] = actions(880);
	v->a[84509] = 2;
	v->a[84510] = anon_sym_LT_AMP_DASH;
	v->a[84511] = anon_sym_GT_AMP_DASH;
	v->a[84512] = state(1733);
	v->a[84513] = 2;
	v->a[84514] = sym_file_redirect;
	v->a[84515] = aux_sym_redirected_statement_repeat2;
	v->a[84516] = actions(878);
	v->a[84517] = 8;
	v->a[84518] = anon_sym_LT;
	v->a[84519] = anon_sym_GT;
	small_parse_table_4226(v);
}

void	small_parse_table_4226(t_small_parse_table_array *v)
{
	v->a[84520] = anon_sym_GT_GT;
	v->a[84521] = anon_sym_AMP_GT;
	v->a[84522] = anon_sym_AMP_GT_GT;
	v->a[84523] = anon_sym_LT_AMP;
	v->a[84524] = anon_sym_GT_AMP;
	v->a[84525] = anon_sym_GT_PIPE;
	v->a[84526] = 10;
	v->a[84527] = actions(3);
	v->a[84528] = 1;
	v->a[84529] = sym_comment;
	v->a[84530] = actions(3290);
	v->a[84531] = 1;
	v->a[84532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84533] = actions(3292);
	v->a[84534] = 1;
	v->a[84535] = anon_sym_DOLLAR;
	v->a[84536] = actions(3294);
	v->a[84537] = 1;
	v->a[84538] = anon_sym_DQUOTE;
	v->a[84539] = actions(3296);
	small_parse_table_4227(v);
}

void	small_parse_table_4227(t_small_parse_table_array *v)
{
	v->a[84540] = 1;
	v->a[84541] = anon_sym_DOLLAR_LBRACE;
	v->a[84542] = actions(3298);
	v->a[84543] = 1;
	v->a[84544] = anon_sym_DOLLAR_LPAREN;
	v->a[84545] = actions(3300);
	v->a[84546] = 1;
	v->a[84547] = anon_sym_BQUOTE;
	v->a[84548] = actions(3302);
	v->a[84549] = 1;
	v->a[84550] = sym__bare_dollar;
	v->a[84551] = actions(3288);
	v->a[84552] = 5;
	v->a[84553] = aux_sym_concatenation_token1;
	v->a[84554] = sym_raw_string;
	v->a[84555] = sym_number;
	v->a[84556] = sym__comment_word;
	v->a[84557] = sym_word;
	v->a[84558] = state(1580);
	v->a[84559] = 5;
	small_parse_table_4228(v);
}

void	small_parse_table_4228(t_small_parse_table_array *v)
{
	v->a[84560] = sym_arithmetic_expansion;
	v->a[84561] = sym_string;
	v->a[84562] = sym_simple_expansion;
	v->a[84563] = sym_expansion;
	v->a[84564] = sym_command_substitution;
	v->a[84565] = 10;
	v->a[84566] = actions(3);
	v->a[84567] = 1;
	v->a[84568] = sym_comment;
	v->a[84569] = actions(1588);
	v->a[84570] = 1;
	v->a[84571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84572] = actions(1592);
	v->a[84573] = 1;
	v->a[84574] = anon_sym_DQUOTE;
	v->a[84575] = actions(1594);
	v->a[84576] = 1;
	v->a[84577] = anon_sym_DOLLAR_LBRACE;
	v->a[84578] = actions(1596);
	v->a[84579] = 1;
	small_parse_table_4229(v);
}

void	small_parse_table_4229(t_small_parse_table_array *v)
{
	v->a[84580] = anon_sym_DOLLAR_LPAREN;
	v->a[84581] = actions(1598);
	v->a[84582] = 1;
	v->a[84583] = anon_sym_BQUOTE;
	v->a[84584] = actions(3244);
	v->a[84585] = 1;
	v->a[84586] = sym__bare_dollar;
	v->a[84587] = actions(3304);
	v->a[84588] = 1;
	v->a[84589] = anon_sym_DOLLAR;
	v->a[84590] = actions(3242);
	v->a[84591] = 5;
	v->a[84592] = aux_sym_concatenation_token1;
	v->a[84593] = sym_raw_string;
	v->a[84594] = sym_number;
	v->a[84595] = sym__comment_word;
	v->a[84596] = sym_word;
	v->a[84597] = state(1591);
	v->a[84598] = 5;
	v->a[84599] = sym_arithmetic_expansion;
	small_parse_table_4230(v);
}

/* EOF small_parse_table_845.c */
