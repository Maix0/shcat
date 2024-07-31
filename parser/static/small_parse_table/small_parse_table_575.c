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
	v->a[57500] = anon_sym_esac;
	v->a[57501] = anon_sym_PIPE;
	v->a[57502] = anon_sym_SEMI_SEMI;
	v->a[57503] = anon_sym_AMP_AMP;
	v->a[57504] = anon_sym_PIPE_PIPE;
	v->a[57505] = anon_sym_LT;
	v->a[57506] = anon_sym_GT;
	v->a[57507] = anon_sym_GT_GT;
	v->a[57508] = anon_sym_LT_AMP;
	v->a[57509] = anon_sym_GT_AMP;
	v->a[57510] = anon_sym_GT_PIPE;
	v->a[57511] = anon_sym_LT_GT;
	v->a[57512] = anon_sym_LT_LT;
	v->a[57513] = anon_sym_LT_LT_DASH;
	v->a[57514] = anon_sym_SEMI;
	v->a[57515] = 7;
	v->a[57516] = actions(3);
	v->a[57517] = 1;
	v->a[57518] = sym_comment;
	v->a[57519] = actions(746);
	small_parse_table_2876(v);
}

void	small_parse_table_2876(t_small_parse_table_array *v)
{
	v->a[57520] = 1;
	v->a[57521] = anon_sym_PIPE;
	v->a[57522] = actions(2309);
	v->a[57523] = 1;
	v->a[57524] = aux_sym_heredoc_redirect_token1;
	v->a[57525] = actions(850);
	v->a[57526] = 2;
	v->a[57527] = anon_sym_LT_LT;
	v->a[57528] = anon_sym_LT_LT_DASH;
	v->a[57529] = actions(1213);
	v->a[57530] = 2;
	v->a[57531] = anon_sym_AMP_AMP;
	v->a[57532] = anon_sym_PIPE_PIPE;
	v->a[57533] = state(1185);
	v->a[57534] = 3;
	v->a[57535] = sym_file_redirect;
	v->a[57536] = sym_heredoc_redirect;
	v->a[57537] = aux_sym_redirected_statement_repeat1;
	v->a[57538] = actions(2307);
	v->a[57539] = 7;
	small_parse_table_2877(v);
}

void	small_parse_table_2877(t_small_parse_table_array *v)
{
	v->a[57540] = anon_sym_LT;
	v->a[57541] = anon_sym_GT;
	v->a[57542] = anon_sym_GT_GT;
	v->a[57543] = anon_sym_LT_AMP;
	v->a[57544] = anon_sym_GT_AMP;
	v->a[57545] = anon_sym_GT_PIPE;
	v->a[57546] = anon_sym_LT_GT;
	v->a[57547] = 10;
	v->a[57548] = actions(3);
	v->a[57549] = 1;
	v->a[57550] = sym_comment;
	v->a[57551] = actions(1993);
	v->a[57552] = 1;
	v->a[57553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57554] = actions(1997);
	v->a[57555] = 1;
	v->a[57556] = anon_sym_DQUOTE;
	v->a[57557] = actions(1999);
	v->a[57558] = 1;
	v->a[57559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2878(v);
}

void	small_parse_table_2878(t_small_parse_table_array *v)
{
	v->a[57560] = actions(2001);
	v->a[57561] = 1;
	v->a[57562] = anon_sym_DOLLAR_LPAREN;
	v->a[57563] = actions(2003);
	v->a[57564] = 1;
	v->a[57565] = anon_sym_BQUOTE;
	v->a[57566] = actions(2226);
	v->a[57567] = 1;
	v->a[57568] = anon_sym_DOLLAR;
	v->a[57569] = state(247);
	v->a[57570] = 2;
	v->a[57571] = sym_concatenation;
	v->a[57572] = aux_sym_for_statement_repeat1;
	v->a[57573] = actions(2311);
	v->a[57574] = 3;
	v->a[57575] = sym_raw_string;
	v->a[57576] = sym_number;
	v->a[57577] = sym_word;
	v->a[57578] = state(337);
	v->a[57579] = 5;
	small_parse_table_2879(v);
}

void	small_parse_table_2879(t_small_parse_table_array *v)
{
	v->a[57580] = sym_arithmetic_expansion;
	v->a[57581] = sym_string;
	v->a[57582] = sym_simple_expansion;
	v->a[57583] = sym_expansion;
	v->a[57584] = sym_command_substitution;
	v->a[57585] = 3;
	v->a[57586] = actions(3);
	v->a[57587] = 1;
	v->a[57588] = sym_comment;
	v->a[57589] = actions(1901);
	v->a[57590] = 1;
	v->a[57591] = aux_sym_heredoc_redirect_token1;
	v->a[57592] = actions(1903);
	v->a[57593] = 15;
	v->a[57594] = anon_sym_esac;
	v->a[57595] = anon_sym_PIPE;
	v->a[57596] = anon_sym_SEMI_SEMI;
	v->a[57597] = anon_sym_AMP_AMP;
	v->a[57598] = anon_sym_PIPE_PIPE;
	v->a[57599] = anon_sym_LT;
	small_parse_table_2880(v);
}

/* EOF small_parse_table_575.c */
