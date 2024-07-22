/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_535.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2675(t_small_parse_table_array *v)
{
	v->a[53500] = actions(1227);
	v->a[53501] = 17;
	v->a[53502] = anon_sym_PIPE;
	v->a[53503] = anon_sym_RPAREN;
	v->a[53504] = anon_sym_SEMI_SEMI;
	v->a[53505] = anon_sym_AMP_AMP;
	v->a[53506] = anon_sym_PIPE_PIPE;
	v->a[53507] = anon_sym_LT;
	v->a[53508] = anon_sym_GT;
	v->a[53509] = anon_sym_GT_GT;
	v->a[53510] = anon_sym_LT_AMP;
	v->a[53511] = anon_sym_GT_AMP;
	v->a[53512] = anon_sym_GT_PIPE;
	v->a[53513] = anon_sym_LT_GT;
	v->a[53514] = anon_sym_LT_LT;
	v->a[53515] = anon_sym_LT_LT_DASH;
	v->a[53516] = aux_sym_concatenation_token1;
	v->a[53517] = anon_sym_BQUOTE;
	v->a[53518] = anon_sym_SEMI;
	v->a[53519] = 3;
	small_parse_table_2676(v);
}

void	small_parse_table_2676(t_small_parse_table_array *v)
{
	v->a[53520] = actions(3);
	v->a[53521] = 1;
	v->a[53522] = sym_comment;
	v->a[53523] = actions(1110);
	v->a[53524] = 5;
	v->a[53525] = sym_file_descriptor;
	v->a[53526] = sym__concat;
	v->a[53527] = sym_variable_name;
	v->a[53528] = ts_builtin_sym_end;
	v->a[53529] = aux_sym_heredoc_redirect_token1;
	v->a[53530] = actions(1105);
	v->a[53531] = 17;
	v->a[53532] = anon_sym_PIPE;
	v->a[53533] = anon_sym_RPAREN;
	v->a[53534] = anon_sym_SEMI_SEMI;
	v->a[53535] = anon_sym_AMP_AMP;
	v->a[53536] = anon_sym_PIPE_PIPE;
	v->a[53537] = anon_sym_LT;
	v->a[53538] = anon_sym_GT;
	v->a[53539] = anon_sym_GT_GT;
	small_parse_table_2677(v);
}

void	small_parse_table_2677(t_small_parse_table_array *v)
{
	v->a[53540] = anon_sym_LT_AMP;
	v->a[53541] = anon_sym_GT_AMP;
	v->a[53542] = anon_sym_GT_PIPE;
	v->a[53543] = anon_sym_LT_GT;
	v->a[53544] = anon_sym_LT_LT;
	v->a[53545] = anon_sym_LT_LT_DASH;
	v->a[53546] = aux_sym_concatenation_token1;
	v->a[53547] = anon_sym_BQUOTE;
	v->a[53548] = anon_sym_SEMI;
	v->a[53549] = 16;
	v->a[53550] = actions(3);
	v->a[53551] = 1;
	v->a[53552] = sym_comment;
	v->a[53553] = actions(1718);
	v->a[53554] = 1;
	v->a[53555] = anon_sym_esac;
	v->a[53556] = actions(1720);
	v->a[53557] = 1;
	v->a[53558] = anon_sym_LPAREN;
	v->a[53559] = actions(1724);
	small_parse_table_2678(v);
}

void	small_parse_table_2678(t_small_parse_table_array *v)
{
	v->a[53560] = 1;
	v->a[53561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53562] = actions(1726);
	v->a[53563] = 1;
	v->a[53564] = anon_sym_DOLLAR;
	v->a[53565] = actions(1728);
	v->a[53566] = 1;
	v->a[53567] = anon_sym_DQUOTE;
	v->a[53568] = actions(1730);
	v->a[53569] = 1;
	v->a[53570] = anon_sym_DOLLAR_LBRACE;
	v->a[53571] = actions(1732);
	v->a[53572] = 1;
	v->a[53573] = anon_sym_DOLLAR_LPAREN;
	v->a[53574] = actions(1734);
	v->a[53575] = 1;
	v->a[53576] = anon_sym_BQUOTE;
	v->a[53577] = actions(1736);
	v->a[53578] = 1;
	v->a[53579] = sym_extglob_pattern;
	small_parse_table_2679(v);
}

void	small_parse_table_2679(t_small_parse_table_array *v)
{
	v->a[53580] = state(1013);
	v->a[53581] = 1;
	v->a[53582] = aux_sym_case_statement_repeat1;
	v->a[53583] = state(1682);
	v->a[53584] = 1;
	v->a[53585] = sym_case_item;
	v->a[53586] = state(2072);
	v->a[53587] = 1;
	v->a[53588] = sym__case_item_last;
	v->a[53589] = state(1877);
	v->a[53590] = 2;
	v->a[53591] = sym_concatenation;
	v->a[53592] = sym__extglob_blob;
	v->a[53593] = actions(1716);
	v->a[53594] = 3;
	v->a[53595] = sym_raw_string;
	v->a[53596] = sym_number;
	v->a[53597] = sym_word;
	v->a[53598] = state(1772);
	v->a[53599] = 5;
	small_parse_table_2680(v);
}

/* EOF small_parse_table_535.c */
