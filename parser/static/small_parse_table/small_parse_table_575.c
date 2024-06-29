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
	v->a[57500] = 1;
	v->a[57501] = anon_sym_BQUOTE;
	v->a[57502] = actions(1895);
	v->a[57503] = 1;
	v->a[57504] = sym_extglob_pattern;
	v->a[57505] = actions(1945);
	v->a[57506] = 1;
	v->a[57507] = anon_sym_esac;
	v->a[57508] = state(1306);
	v->a[57509] = 1;
	v->a[57510] = sym_terminator;
	v->a[57511] = state(1318);
	v->a[57512] = 1;
	v->a[57513] = aux_sym_case_statement_repeat1;
	v->a[57514] = state(1923);
	v->a[57515] = 1;
	v->a[57516] = sym_case_item;
	v->a[57517] = state(2258);
	v->a[57518] = 1;
	v->a[57519] = sym__case_item_last;
	small_parse_table_2876(v);
}

void	small_parse_table_2876(t_small_parse_table_array *v)
{
	v->a[57520] = state(2078);
	v->a[57521] = 2;
	v->a[57522] = sym_concatenation;
	v->a[57523] = sym__extglob_blob;
	v->a[57524] = actions(1875);
	v->a[57525] = 3;
	v->a[57526] = sym_raw_string;
	v->a[57527] = sym_number;
	v->a[57528] = sym_word;
	v->a[57529] = actions(1881);
	v->a[57530] = 4;
	v->a[57531] = anon_sym_SEMI_SEMI;
	v->a[57532] = aux_sym_heredoc_redirect_token1;
	v->a[57533] = anon_sym_AMP;
	v->a[57534] = anon_sym_SEMI;
	v->a[57535] = state(2004);
	v->a[57536] = 5;
	v->a[57537] = sym_arithmetic_expansion;
	v->a[57538] = sym_string;
	v->a[57539] = sym_simple_expansion;
	small_parse_table_2877(v);
}

void	small_parse_table_2877(t_small_parse_table_array *v)
{
	v->a[57540] = sym_expansion;
	v->a[57541] = sym_command_substitution;
	v->a[57542] = 3;
	v->a[57543] = actions(3);
	v->a[57544] = 1;
	v->a[57545] = sym_comment;
	v->a[57546] = actions(1056);
	v->a[57547] = 2;
	v->a[57548] = sym_file_descriptor;
	v->a[57549] = sym__concat;
	v->a[57550] = actions(1058);
	v->a[57551] = 25;
	v->a[57552] = anon_sym_PIPE;
	v->a[57553] = anon_sym_AMP_AMP;
	v->a[57554] = anon_sym_PIPE_PIPE;
	v->a[57555] = anon_sym_LT;
	v->a[57556] = anon_sym_GT;
	v->a[57557] = anon_sym_GT_GT;
	v->a[57558] = anon_sym_AMP_GT;
	v->a[57559] = anon_sym_AMP_GT_GT;
	small_parse_table_2878(v);
}

void	small_parse_table_2878(t_small_parse_table_array *v)
{
	v->a[57560] = anon_sym_LT_AMP;
	v->a[57561] = anon_sym_GT_AMP;
	v->a[57562] = anon_sym_GT_PIPE;
	v->a[57563] = anon_sym_LT_AMP_DASH;
	v->a[57564] = anon_sym_GT_AMP_DASH;
	v->a[57565] = anon_sym_LT_LT;
	v->a[57566] = anon_sym_LT_LT_DASH;
	v->a[57567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57568] = aux_sym_concatenation_token1;
	v->a[57569] = anon_sym_DOLLAR;
	v->a[57570] = anon_sym_DQUOTE;
	v->a[57571] = sym_raw_string;
	v->a[57572] = sym_number;
	v->a[57573] = anon_sym_DOLLAR_LBRACE;
	v->a[57574] = anon_sym_DOLLAR_LPAREN;
	v->a[57575] = anon_sym_BQUOTE;
	v->a[57576] = sym_word;
	v->a[57577] = 16;
	v->a[57578] = actions(1074);
	v->a[57579] = 1;
	small_parse_table_2879(v);
}

void	small_parse_table_2879(t_small_parse_table_array *v)
{
	v->a[57580] = sym_comment;
	v->a[57581] = actions(1831);
	v->a[57582] = 1;
	v->a[57583] = anon_sym_LPAREN;
	v->a[57584] = actions(1833);
	v->a[57585] = 1;
	v->a[57586] = anon_sym_BANG;
	v->a[57587] = actions(1841);
	v->a[57588] = 1;
	v->a[57589] = anon_sym_TILDE;
	v->a[57590] = actions(1843);
	v->a[57591] = 1;
	v->a[57592] = anon_sym_DOLLAR;
	v->a[57593] = actions(1845);
	v->a[57594] = 1;
	v->a[57595] = anon_sym_DQUOTE;
	v->a[57596] = actions(1849);
	v->a[57597] = 1;
	v->a[57598] = anon_sym_DOLLAR_LBRACE;
	v->a[57599] = actions(1851);
	small_parse_table_2880(v);
}

/* EOF small_parse_table_575.c */
