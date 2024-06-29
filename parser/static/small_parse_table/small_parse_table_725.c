/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_725.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3625(t_small_parse_table_array *v)
{
	v->a[72500] = sym__extglob_blob;
	v->a[72501] = actions(1875);
	v->a[72502] = 3;
	v->a[72503] = sym_raw_string;
	v->a[72504] = sym_number;
	v->a[72505] = sym_word;
	v->a[72506] = state(2004);
	v->a[72507] = 5;
	v->a[72508] = sym_arithmetic_expansion;
	v->a[72509] = sym_string;
	v->a[72510] = sym_simple_expansion;
	v->a[72511] = sym_expansion;
	v->a[72512] = sym_command_substitution;
	v->a[72513] = 7;
	v->a[72514] = actions(3);
	v->a[72515] = 1;
	v->a[72516] = sym_comment;
	v->a[72517] = actions(2229);
	v->a[72518] = 1;
	v->a[72519] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3626(v);
}

void	small_parse_table_3626(t_small_parse_table_array *v)
{
	v->a[72520] = actions(2462);
	v->a[72521] = 1;
	v->a[72522] = sym_file_descriptor;
	v->a[72523] = actions(2064);
	v->a[72524] = 2;
	v->a[72525] = anon_sym_LT_AMP_DASH;
	v->a[72526] = anon_sym_GT_AMP_DASH;
	v->a[72527] = state(1303);
	v->a[72528] = 2;
	v->a[72529] = sym_file_redirect;
	v->a[72530] = aux_sym_redirected_statement_repeat2;
	v->a[72531] = actions(2062);
	v->a[72532] = 8;
	v->a[72533] = anon_sym_LT;
	v->a[72534] = anon_sym_GT;
	v->a[72535] = anon_sym_GT_GT;
	v->a[72536] = anon_sym_AMP_GT;
	v->a[72537] = anon_sym_AMP_GT_GT;
	v->a[72538] = anon_sym_LT_AMP;
	v->a[72539] = anon_sym_GT_AMP;
	small_parse_table_3627(v);
}

void	small_parse_table_3627(t_small_parse_table_array *v)
{
	v->a[72540] = anon_sym_GT_PIPE;
	v->a[72541] = actions(2227);
	v->a[72542] = 8;
	v->a[72543] = anon_sym_PIPE;
	v->a[72544] = anon_sym_SEMI_SEMI;
	v->a[72545] = anon_sym_AMP_AMP;
	v->a[72546] = anon_sym_PIPE_PIPE;
	v->a[72547] = anon_sym_LT_LT;
	v->a[72548] = anon_sym_LT_LT_DASH;
	v->a[72549] = anon_sym_AMP;
	v->a[72550] = anon_sym_SEMI;
	v->a[72551] = 16;
	v->a[72552] = actions(3);
	v->a[72553] = 1;
	v->a[72554] = sym_comment;
	v->a[72555] = actions(1879);
	v->a[72556] = 1;
	v->a[72557] = anon_sym_LPAREN;
	v->a[72558] = actions(1883);
	v->a[72559] = 1;
	small_parse_table_3628(v);
}

void	small_parse_table_3628(t_small_parse_table_array *v)
{
	v->a[72560] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72561] = actions(1885);
	v->a[72562] = 1;
	v->a[72563] = anon_sym_DOLLAR;
	v->a[72564] = actions(1887);
	v->a[72565] = 1;
	v->a[72566] = anon_sym_DQUOTE;
	v->a[72567] = actions(1889);
	v->a[72568] = 1;
	v->a[72569] = anon_sym_DOLLAR_LBRACE;
	v->a[72570] = actions(1891);
	v->a[72571] = 1;
	v->a[72572] = anon_sym_DOLLAR_LPAREN;
	v->a[72573] = actions(1893);
	v->a[72574] = 1;
	v->a[72575] = anon_sym_BQUOTE;
	v->a[72576] = actions(1895);
	v->a[72577] = 1;
	v->a[72578] = sym_extglob_pattern;
	v->a[72579] = actions(1945);
	small_parse_table_3629(v);
}

void	small_parse_table_3629(t_small_parse_table_array *v)
{
	v->a[72580] = 1;
	v->a[72581] = anon_sym_esac;
	v->a[72582] = state(1319);
	v->a[72583] = 1;
	v->a[72584] = aux_sym_case_statement_repeat1;
	v->a[72585] = state(1923);
	v->a[72586] = 1;
	v->a[72587] = sym_case_item;
	v->a[72588] = state(2260);
	v->a[72589] = 1;
	v->a[72590] = sym__case_item_last;
	v->a[72591] = state(2078);
	v->a[72592] = 2;
	v->a[72593] = sym_concatenation;
	v->a[72594] = sym__extglob_blob;
	v->a[72595] = actions(1875);
	v->a[72596] = 3;
	v->a[72597] = sym_raw_string;
	v->a[72598] = sym_number;
	v->a[72599] = sym_word;
	small_parse_table_3630(v);
}

/* EOF small_parse_table_725.c */
