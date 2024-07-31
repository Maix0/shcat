/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_365.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1825(t_small_parse_table_array *v)
{
	v->a[36500] = anon_sym_DOLLAR_LBRACE;
	v->a[36501] = anon_sym_DOLLAR_LPAREN;
	v->a[36502] = anon_sym_BQUOTE;
	v->a[36503] = sym_word;
	v->a[36504] = 7;
	v->a[36505] = actions(3);
	v->a[36506] = 1;
	v->a[36507] = sym_comment;
	v->a[36508] = actions(975);
	v->a[36509] = 1;
	v->a[36510] = sym__bare_dollar;
	v->a[36511] = actions(1378);
	v->a[36512] = 1;
	v->a[36513] = anon_sym_LPAREN;
	v->a[36514] = actions(1380);
	v->a[36515] = 1;
	v->a[36516] = aux_sym_concatenation_token1;
	v->a[36517] = actions(1382);
	v->a[36518] = 1;
	v->a[36519] = sym__concat;
	small_parse_table_1826(v);
}

void	small_parse_table_1826(t_small_parse_table_array *v)
{
	v->a[36520] = state(643);
	v->a[36521] = 1;
	v->a[36522] = aux_sym_concatenation_repeat1;
	v->a[36523] = actions(967);
	v->a[36524] = 21;
	v->a[36525] = anon_sym_PIPE;
	v->a[36526] = anon_sym_AMP_AMP;
	v->a[36527] = anon_sym_PIPE_PIPE;
	v->a[36528] = anon_sym_LT;
	v->a[36529] = anon_sym_GT;
	v->a[36530] = anon_sym_GT_GT;
	v->a[36531] = anon_sym_LT_AMP;
	v->a[36532] = anon_sym_GT_AMP;
	v->a[36533] = anon_sym_GT_PIPE;
	v->a[36534] = anon_sym_LT_GT;
	v->a[36535] = anon_sym_LT_LT;
	v->a[36536] = anon_sym_LT_LT_DASH;
	v->a[36537] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36538] = anon_sym_DOLLAR;
	v->a[36539] = anon_sym_DQUOTE;
	small_parse_table_1827(v);
}

void	small_parse_table_1827(t_small_parse_table_array *v)
{
	v->a[36540] = sym_raw_string;
	v->a[36541] = sym_number;
	v->a[36542] = anon_sym_DOLLAR_LBRACE;
	v->a[36543] = anon_sym_DOLLAR_LPAREN;
	v->a[36544] = anon_sym_BQUOTE;
	v->a[36545] = sym_word;
	v->a[36546] = 5;
	v->a[36547] = actions(3);
	v->a[36548] = 1;
	v->a[36549] = sym_comment;
	v->a[36550] = actions(1308);
	v->a[36551] = 1;
	v->a[36552] = sym_variable_name;
	v->a[36553] = actions(1384);
	v->a[36554] = 1;
	v->a[36555] = ts_builtin_sym_end;
	v->a[36556] = actions(742);
	v->a[36557] = 9;
	v->a[36558] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36559] = anon_sym_DOLLAR;
	small_parse_table_1828(v);
}

void	small_parse_table_1828(t_small_parse_table_array *v)
{
	v->a[36560] = anon_sym_DQUOTE;
	v->a[36561] = sym_raw_string;
	v->a[36562] = sym_number;
	v->a[36563] = anon_sym_DOLLAR_LBRACE;
	v->a[36564] = anon_sym_DOLLAR_LPAREN;
	v->a[36565] = anon_sym_BQUOTE;
	v->a[36566] = sym_word;
	v->a[36567] = actions(1306);
	v->a[36568] = 15;
	v->a[36569] = anon_sym_PIPE;
	v->a[36570] = anon_sym_SEMI_SEMI;
	v->a[36571] = anon_sym_AMP_AMP;
	v->a[36572] = anon_sym_PIPE_PIPE;
	v->a[36573] = anon_sym_LT;
	v->a[36574] = anon_sym_GT;
	v->a[36575] = anon_sym_GT_GT;
	v->a[36576] = anon_sym_LT_AMP;
	v->a[36577] = anon_sym_GT_AMP;
	v->a[36578] = anon_sym_GT_PIPE;
	v->a[36579] = anon_sym_LT_GT;
	small_parse_table_1829(v);
}

void	small_parse_table_1829(t_small_parse_table_array *v)
{
	v->a[36580] = anon_sym_LT_LT;
	v->a[36581] = anon_sym_LT_LT_DASH;
	v->a[36582] = aux_sym_heredoc_redirect_token1;
	v->a[36583] = anon_sym_SEMI;
	v->a[36584] = 3;
	v->a[36585] = actions(3);
	v->a[36586] = 1;
	v->a[36587] = sym_comment;
	v->a[36588] = actions(1077);
	v->a[36589] = 1;
	v->a[36590] = sym__bare_dollar;
	v->a[36591] = actions(1079);
	v->a[36592] = 25;
	v->a[36593] = anon_sym_esac;
	v->a[36594] = anon_sym_PIPE;
	v->a[36595] = anon_sym_SEMI_SEMI;
	v->a[36596] = anon_sym_AMP_AMP;
	v->a[36597] = anon_sym_PIPE_PIPE;
	v->a[36598] = anon_sym_LT;
	v->a[36599] = anon_sym_GT;
	small_parse_table_1830(v);
}

/* EOF small_parse_table_365.c */
