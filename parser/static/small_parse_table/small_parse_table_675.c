/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_675.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3375(t_small_parse_table_array *v)
{
	v->a[67500] = actions(33);
	v->a[67501] = 1;
	v->a[67502] = anon_sym_DOLLAR_LBRACE;
	v->a[67503] = actions(35);
	v->a[67504] = 1;
	v->a[67505] = anon_sym_DOLLAR_LPAREN;
	v->a[67506] = actions(37);
	v->a[67507] = 1;
	v->a[67508] = anon_sym_BQUOTE;
	v->a[67509] = actions(2695);
	v->a[67510] = 1;
	v->a[67511] = sym__bare_dollar;
	v->a[67512] = actions(2693);
	v->a[67513] = 5;
	v->a[67514] = aux_sym_concatenation_token1;
	v->a[67515] = sym_raw_string;
	v->a[67516] = sym_number;
	v->a[67517] = sym__comment_word;
	v->a[67518] = sym_word;
	v->a[67519] = state(449);
	small_parse_table_3376(v);
}

void	small_parse_table_3376(t_small_parse_table_array *v)
{
	v->a[67520] = 5;
	v->a[67521] = sym_arithmetic_expansion;
	v->a[67522] = sym_string;
	v->a[67523] = sym_simple_expansion;
	v->a[67524] = sym_expansion;
	v->a[67525] = sym_command_substitution;
	v->a[67526] = 3;
	v->a[67527] = actions(3);
	v->a[67528] = 1;
	v->a[67529] = sym_comment;
	v->a[67530] = actions(2203);
	v->a[67531] = 2;
	v->a[67532] = sym_file_descriptor;
	v->a[67533] = aux_sym_heredoc_redirect_token1;
	v->a[67534] = actions(2205);
	v->a[67535] = 15;
	v->a[67536] = anon_sym_esac;
	v->a[67537] = anon_sym_PIPE;
	v->a[67538] = anon_sym_SEMI_SEMI;
	v->a[67539] = anon_sym_AMP_AMP;
	small_parse_table_3377(v);
}

void	small_parse_table_3377(t_small_parse_table_array *v)
{
	v->a[67540] = anon_sym_PIPE_PIPE;
	v->a[67541] = anon_sym_LT;
	v->a[67542] = anon_sym_GT;
	v->a[67543] = anon_sym_GT_GT;
	v->a[67544] = anon_sym_LT_AMP;
	v->a[67545] = anon_sym_GT_AMP;
	v->a[67546] = anon_sym_GT_PIPE;
	v->a[67547] = anon_sym_LT_GT;
	v->a[67548] = anon_sym_LT_LT;
	v->a[67549] = anon_sym_LT_LT_DASH;
	v->a[67550] = anon_sym_SEMI;
	v->a[67551] = 10;
	v->a[67552] = actions(3);
	v->a[67553] = 1;
	v->a[67554] = sym_comment;
	v->a[67555] = actions(2331);
	v->a[67556] = 1;
	v->a[67557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67558] = actions(2335);
	v->a[67559] = 1;
	small_parse_table_3378(v);
}

void	small_parse_table_3378(t_small_parse_table_array *v)
{
	v->a[67560] = anon_sym_DQUOTE;
	v->a[67561] = actions(2337);
	v->a[67562] = 1;
	v->a[67563] = anon_sym_DOLLAR_LBRACE;
	v->a[67564] = actions(2339);
	v->a[67565] = 1;
	v->a[67566] = anon_sym_DOLLAR_LPAREN;
	v->a[67567] = actions(2341);
	v->a[67568] = 1;
	v->a[67569] = anon_sym_BQUOTE;
	v->a[67570] = actions(2343);
	v->a[67571] = 1;
	v->a[67572] = sym__bare_dollar;
	v->a[67573] = actions(2697);
	v->a[67574] = 1;
	v->a[67575] = anon_sym_DOLLAR;
	v->a[67576] = actions(2329);
	v->a[67577] = 5;
	v->a[67578] = aux_sym_concatenation_token1;
	v->a[67579] = sym_raw_string;
	small_parse_table_3379(v);
}

void	small_parse_table_3379(t_small_parse_table_array *v)
{
	v->a[67580] = sym_number;
	v->a[67581] = sym__comment_word;
	v->a[67582] = sym_word;
	v->a[67583] = state(488);
	v->a[67584] = 5;
	v->a[67585] = sym_arithmetic_expansion;
	v->a[67586] = sym_string;
	v->a[67587] = sym_simple_expansion;
	v->a[67588] = sym_expansion;
	v->a[67589] = sym_command_substitution;
	v->a[67590] = 10;
	v->a[67591] = actions(3);
	v->a[67592] = 1;
	v->a[67593] = sym_comment;
	v->a[67594] = actions(1724);
	v->a[67595] = 1;
	v->a[67596] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67597] = actions(1728);
	v->a[67598] = 1;
	v->a[67599] = anon_sym_DQUOTE;
	small_parse_table_3380(v);
}

/* EOF small_parse_table_675.c */
