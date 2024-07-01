/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_575.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2875(t_small_parse_table_array *v)
{
	v->a[57500] = anon_sym_GT_GT;
	v->a[57501] = anon_sym_LT_AMP;
	v->a[57502] = anon_sym_GT_AMP;
	v->a[57503] = anon_sym_GT_PIPE;
	v->a[57504] = anon_sym_LT_GT;
	v->a[57505] = 10;
	v->a[57506] = actions(3);
	v->a[57507] = 1;
	v->a[57508] = sym_comment;
	v->a[57509] = actions(736);
	v->a[57510] = 1;
	v->a[57511] = anon_sym_PIPE;
	v->a[57512] = actions(1865);
	v->a[57513] = 1;
	v->a[57514] = aux_sym_heredoc_redirect_token1;
	v->a[57515] = actions(1889);
	v->a[57516] = 1;
	v->a[57517] = sym_file_descriptor;
	v->a[57518] = state(621);
	v->a[57519] = 1;
	small_parse_table_2876(v);
}

void	small_parse_table_2876(t_small_parse_table_array *v)
{
	v->a[57520] = sym_terminator;
	v->a[57521] = actions(744);
	v->a[57522] = 2;
	v->a[57523] = anon_sym_LT_LT;
	v->a[57524] = anon_sym_LT_LT_DASH;
	v->a[57525] = actions(955);
	v->a[57526] = 2;
	v->a[57527] = anon_sym_AMP_AMP;
	v->a[57528] = anon_sym_PIPE_PIPE;
	v->a[57529] = actions(740);
	v->a[57530] = 3;
	v->a[57531] = anon_sym_SEMI_SEMI;
	v->a[57532] = anon_sym_AMP;
	v->a[57533] = anon_sym_SEMI;
	v->a[57534] = state(1194);
	v->a[57535] = 3;
	v->a[57536] = sym_file_redirect;
	v->a[57537] = sym_heredoc_redirect;
	v->a[57538] = aux_sym_redirected_statement_repeat1;
	v->a[57539] = actions(1887);
	small_parse_table_2877(v);
}

void	small_parse_table_2877(t_small_parse_table_array *v)
{
	v->a[57540] = 7;
	v->a[57541] = anon_sym_LT;
	v->a[57542] = anon_sym_GT;
	v->a[57543] = anon_sym_GT_GT;
	v->a[57544] = anon_sym_LT_AMP;
	v->a[57545] = anon_sym_GT_AMP;
	v->a[57546] = anon_sym_GT_PIPE;
	v->a[57547] = anon_sym_LT_GT;
	v->a[57548] = 12;
	v->a[57549] = actions(3);
	v->a[57550] = 1;
	v->a[57551] = sym_comment;
	v->a[57552] = actions(1074);
	v->a[57553] = 1;
	v->a[57554] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57555] = actions(1076);
	v->a[57556] = 1;
	v->a[57557] = anon_sym_DOLLAR;
	v->a[57558] = actions(1078);
	v->a[57559] = 1;
	small_parse_table_2878(v);
}

void	small_parse_table_2878(t_small_parse_table_array *v)
{
	v->a[57560] = anon_sym_DQUOTE;
	v->a[57561] = actions(1080);
	v->a[57562] = 1;
	v->a[57563] = anon_sym_DOLLAR_LBRACE;
	v->a[57564] = actions(1082);
	v->a[57565] = 1;
	v->a[57566] = anon_sym_DOLLAR_LPAREN;
	v->a[57567] = actions(1084);
	v->a[57568] = 1;
	v->a[57569] = anon_sym_BQUOTE;
	v->a[57570] = state(1911);
	v->a[57571] = 1;
	v->a[57572] = sym_terminator;
	v->a[57573] = state(1177);
	v->a[57574] = 2;
	v->a[57575] = sym_concatenation;
	v->a[57576] = aux_sym_for_statement_repeat1;
	v->a[57577] = actions(1891);
	v->a[57578] = 3;
	v->a[57579] = sym_raw_string;
	small_parse_table_2879(v);
}

void	small_parse_table_2879(t_small_parse_table_array *v)
{
	v->a[57580] = sym_number;
	v->a[57581] = sym_word;
	v->a[57582] = actions(1893);
	v->a[57583] = 4;
	v->a[57584] = anon_sym_SEMI_SEMI;
	v->a[57585] = aux_sym_heredoc_redirect_token1;
	v->a[57586] = anon_sym_AMP;
	v->a[57587] = anon_sym_SEMI;
	v->a[57588] = state(1398);
	v->a[57589] = 5;
	v->a[57590] = sym_arithmetic_expansion;
	v->a[57591] = sym_string;
	v->a[57592] = sym_simple_expansion;
	v->a[57593] = sym_expansion;
	v->a[57594] = sym_command_substitution;
	v->a[57595] = 11;
	v->a[57596] = actions(3);
	v->a[57597] = 1;
	v->a[57598] = sym_comment;
	v->a[57599] = actions(736);
	small_parse_table_2880(v);
}

/* EOF small_parse_table_575.c */
