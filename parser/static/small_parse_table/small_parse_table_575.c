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
	v->a[57500] = state(1806);
	v->a[57501] = 5;
	v->a[57502] = sym_arithmetic_expansion;
	v->a[57503] = sym_string;
	v->a[57504] = sym_simple_expansion;
	v->a[57505] = sym_expansion;
	v->a[57506] = sym_command_substitution;
	v->a[57507] = 15;
	v->a[57508] = actions(3);
	v->a[57509] = 1;
	v->a[57510] = sym_comment;
	v->a[57511] = actions(1637);
	v->a[57512] = 1;
	v->a[57513] = anon_sym_LPAREN;
	v->a[57514] = actions(1641);
	v->a[57515] = 1;
	v->a[57516] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57517] = actions(1643);
	v->a[57518] = 1;
	v->a[57519] = anon_sym_DOLLAR;
	small_parse_table_2876(v);
}

void	small_parse_table_2876(t_small_parse_table_array *v)
{
	v->a[57520] = actions(1645);
	v->a[57521] = 1;
	v->a[57522] = anon_sym_DQUOTE;
	v->a[57523] = actions(1647);
	v->a[57524] = 1;
	v->a[57525] = anon_sym_DOLLAR_LBRACE;
	v->a[57526] = actions(1649);
	v->a[57527] = 1;
	v->a[57528] = anon_sym_DOLLAR_LPAREN;
	v->a[57529] = actions(1651);
	v->a[57530] = 1;
	v->a[57531] = anon_sym_BQUOTE;
	v->a[57532] = actions(1653);
	v->a[57533] = 1;
	v->a[57534] = sym_extglob_pattern;
	v->a[57535] = state(1123);
	v->a[57536] = 1;
	v->a[57537] = aux_sym_case_statement_repeat1;
	v->a[57538] = state(1713);
	v->a[57539] = 1;
	small_parse_table_2877(v);
}

void	small_parse_table_2877(t_small_parse_table_array *v)
{
	v->a[57540] = sym_case_item;
	v->a[57541] = state(1997);
	v->a[57542] = 1;
	v->a[57543] = sym__case_item_last;
	v->a[57544] = state(1873);
	v->a[57545] = 2;
	v->a[57546] = sym_concatenation;
	v->a[57547] = sym__extglob_blob;
	v->a[57548] = actions(1633);
	v->a[57549] = 3;
	v->a[57550] = sym_raw_string;
	v->a[57551] = sym_number;
	v->a[57552] = sym_word;
	v->a[57553] = state(1806);
	v->a[57554] = 5;
	v->a[57555] = sym_arithmetic_expansion;
	v->a[57556] = sym_string;
	v->a[57557] = sym_simple_expansion;
	v->a[57558] = sym_expansion;
	v->a[57559] = sym_command_substitution;
	small_parse_table_2878(v);
}

void	small_parse_table_2878(t_small_parse_table_array *v)
{
	v->a[57560] = 4;
	v->a[57561] = actions(3);
	v->a[57562] = 1;
	v->a[57563] = sym_comment;
	v->a[57564] = actions(995);
	v->a[57565] = 2;
	v->a[57566] = sym_file_descriptor;
	v->a[57567] = aux_sym_heredoc_redirect_token1;
	v->a[57568] = state(1059);
	v->a[57569] = 3;
	v->a[57570] = sym_file_redirect;
	v->a[57571] = sym_heredoc_redirect;
	v->a[57572] = aux_sym_redirected_statement_repeat1;
	v->a[57573] = actions(997);
	v->a[57574] = 16;
	v->a[57575] = anon_sym_esac;
	v->a[57576] = anon_sym_PIPE;
	v->a[57577] = anon_sym_SEMI_SEMI;
	v->a[57578] = anon_sym_AMP_AMP;
	v->a[57579] = anon_sym_PIPE_PIPE;
	small_parse_table_2879(v);
}

void	small_parse_table_2879(t_small_parse_table_array *v)
{
	v->a[57580] = anon_sym_LT;
	v->a[57581] = anon_sym_GT;
	v->a[57582] = anon_sym_GT_GT;
	v->a[57583] = anon_sym_LT_AMP;
	v->a[57584] = anon_sym_GT_AMP;
	v->a[57585] = anon_sym_GT_PIPE;
	v->a[57586] = anon_sym_LT_GT;
	v->a[57587] = anon_sym_LT_LT;
	v->a[57588] = anon_sym_LT_LT_DASH;
	v->a[57589] = anon_sym_AMP;
	v->a[57590] = anon_sym_SEMI;
	v->a[57591] = 15;
	v->a[57592] = actions(3);
	v->a[57593] = 1;
	v->a[57594] = sym_comment;
	v->a[57595] = actions(1637);
	v->a[57596] = 1;
	v->a[57597] = anon_sym_LPAREN;
	v->a[57598] = actions(1641);
	v->a[57599] = 1;
	small_parse_table_2880(v);
}

/* EOF small_parse_table_575.c */
