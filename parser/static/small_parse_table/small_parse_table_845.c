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
	v->a[84500] = 7;
	v->a[84501] = anon_sym_PIPE;
	v->a[84502] = anon_sym_LT;
	v->a[84503] = anon_sym_GT;
	v->a[84504] = anon_sym_AMP_GT;
	v->a[84505] = anon_sym_LT_AMP;
	v->a[84506] = anon_sym_GT_AMP;
	v->a[84507] = anon_sym_LT_LT;
	v->a[84508] = actions(2419);
	v->a[84509] = 9;
	v->a[84510] = sym_file_descriptor;
	v->a[84511] = anon_sym_AMP_AMP;
	v->a[84512] = anon_sym_PIPE_PIPE;
	v->a[84513] = anon_sym_GT_GT;
	v->a[84514] = anon_sym_AMP_GT_GT;
	v->a[84515] = anon_sym_GT_PIPE;
	v->a[84516] = anon_sym_LT_AMP_DASH;
	v->a[84517] = anon_sym_GT_AMP_DASH;
	v->a[84518] = anon_sym_LT_LT_DASH;
	v->a[84519] = 3;
	small_parse_table_4226(v);
}

void	small_parse_table_4226(t_small_parse_table_array *v)
{
	v->a[84520] = actions(1074);
	v->a[84521] = 1;
	v->a[84522] = sym_comment;
	v->a[84523] = actions(2436);
	v->a[84524] = 7;
	v->a[84525] = anon_sym_PIPE;
	v->a[84526] = anon_sym_LT;
	v->a[84527] = anon_sym_GT;
	v->a[84528] = anon_sym_AMP_GT;
	v->a[84529] = anon_sym_LT_AMP;
	v->a[84530] = anon_sym_GT_AMP;
	v->a[84531] = anon_sym_LT_LT;
	v->a[84532] = actions(2434);
	v->a[84533] = 9;
	v->a[84534] = sym_file_descriptor;
	v->a[84535] = anon_sym_AMP_AMP;
	v->a[84536] = anon_sym_PIPE_PIPE;
	v->a[84537] = anon_sym_GT_GT;
	v->a[84538] = anon_sym_AMP_GT_GT;
	v->a[84539] = anon_sym_GT_PIPE;
	small_parse_table_4227(v);
}

void	small_parse_table_4227(t_small_parse_table_array *v)
{
	v->a[84540] = anon_sym_LT_AMP_DASH;
	v->a[84541] = anon_sym_GT_AMP_DASH;
	v->a[84542] = anon_sym_LT_LT_DASH;
	v->a[84543] = 10;
	v->a[84544] = actions(3);
	v->a[84545] = 1;
	v->a[84546] = sym_comment;
	v->a[84547] = actions(718);
	v->a[84548] = 1;
	v->a[84549] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84550] = actions(720);
	v->a[84551] = 1;
	v->a[84552] = anon_sym_DOLLAR;
	v->a[84553] = actions(722);
	v->a[84554] = 1;
	v->a[84555] = anon_sym_DQUOTE;
	v->a[84556] = actions(724);
	v->a[84557] = 1;
	v->a[84558] = anon_sym_DOLLAR_LBRACE;
	v->a[84559] = actions(726);
	small_parse_table_4228(v);
}

void	small_parse_table_4228(t_small_parse_table_array *v)
{
	v->a[84560] = 1;
	v->a[84561] = anon_sym_DOLLAR_LPAREN;
	v->a[84562] = actions(728);
	v->a[84563] = 1;
	v->a[84564] = anon_sym_BQUOTE;
	v->a[84565] = state(261);
	v->a[84566] = 2;
	v->a[84567] = sym_concatenation;
	v->a[84568] = aux_sym_for_statement_repeat1;
	v->a[84569] = actions(873);
	v->a[84570] = 3;
	v->a[84571] = sym_raw_string;
	v->a[84572] = sym_number;
	v->a[84573] = sym_word;
	v->a[84574] = state(647);
	v->a[84575] = 5;
	v->a[84576] = sym_arithmetic_expansion;
	v->a[84577] = sym_string;
	v->a[84578] = sym_simple_expansion;
	v->a[84579] = sym_expansion;
	small_parse_table_4229(v);
}

void	small_parse_table_4229(t_small_parse_table_array *v)
{
	v->a[84580] = sym_command_substitution;
	v->a[84581] = 3;
	v->a[84582] = actions(1074);
	v->a[84583] = 1;
	v->a[84584] = sym_comment;
	v->a[84585] = actions(2425);
	v->a[84586] = 7;
	v->a[84587] = anon_sym_PIPE;
	v->a[84588] = anon_sym_LT;
	v->a[84589] = anon_sym_GT;
	v->a[84590] = anon_sym_AMP_GT;
	v->a[84591] = anon_sym_LT_AMP;
	v->a[84592] = anon_sym_GT_AMP;
	v->a[84593] = anon_sym_LT_LT;
	v->a[84594] = actions(2423);
	v->a[84595] = 9;
	v->a[84596] = sym_file_descriptor;
	v->a[84597] = anon_sym_AMP_AMP;
	v->a[84598] = anon_sym_PIPE_PIPE;
	v->a[84599] = anon_sym_GT_GT;
	small_parse_table_4230(v);
}

/* EOF small_parse_table_845.c */
