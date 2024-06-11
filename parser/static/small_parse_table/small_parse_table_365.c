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
	v->a[36500] = state(1114);
	v->a[36501] = 1;
	v->a[36502] = sym_concatenation;
	v->a[36503] = actions(1358);
	v->a[36504] = 3;
	v->a[36505] = sym_raw_string;
	v->a[36506] = sym_number;
	v->a[36507] = sym_word;
	v->a[36508] = state(951);
	v->a[36509] = 5;
	v->a[36510] = sym_arithmetic_expansion;
	v->a[36511] = sym_string;
	v->a[36512] = sym_simple_expansion;
	v->a[36513] = sym_expansion;
	v->a[36514] = sym_command_substitution;
	v->a[36515] = actions(516);
	v->a[36516] = 15;
	v->a[36517] = anon_sym_PIPE;
	v->a[36518] = anon_sym_AMP_AMP;
	v->a[36519] = anon_sym_PIPE_PIPE;
	small_parse_table_1826(v);
}

void	small_parse_table_1826(t_small_parse_table_array *v)
{
	v->a[36520] = anon_sym_LT;
	v->a[36521] = anon_sym_GT;
	v->a[36522] = anon_sym_GT_GT;
	v->a[36523] = anon_sym_AMP_GT;
	v->a[36524] = anon_sym_AMP_GT_GT;
	v->a[36525] = anon_sym_LT_AMP;
	v->a[36526] = anon_sym_GT_AMP;
	v->a[36527] = anon_sym_GT_PIPE;
	v->a[36528] = anon_sym_LT_AMP_DASH;
	v->a[36529] = anon_sym_GT_AMP_DASH;
	v->a[36530] = anon_sym_LT_LT;
	v->a[36531] = anon_sym_LT_LT_DASH;
	v->a[36532] = 17;
	v->a[36533] = actions(1094);
	v->a[36534] = 1;
	v->a[36535] = sym_comment;
	v->a[36536] = actions(1108);
	v->a[36537] = 1;
	v->a[36538] = anon_sym_PIPE;
	v->a[36539] = actions(1110);
	small_parse_table_1827(v);
}

void	small_parse_table_1827(t_small_parse_table_array *v)
{
	v->a[36540] = 1;
	v->a[36541] = anon_sym_AMP_AMP;
	v->a[36542] = actions(1112);
	v->a[36543] = 1;
	v->a[36544] = anon_sym_CARET;
	v->a[36545] = actions(1114);
	v->a[36546] = 1;
	v->a[36547] = anon_sym_AMP;
	v->a[36548] = actions(1126);
	v->a[36549] = 1;
	v->a[36550] = anon_sym_PIPE_PIPE;
	v->a[36551] = actions(1128);
	v->a[36552] = 1;
	v->a[36553] = anon_sym_QMARK;
	v->a[36554] = actions(1155);
	v->a[36555] = 1;
	v->a[36556] = anon_sym_EQ;
	v->a[36557] = actions(1382);
	v->a[36558] = 1;
	v->a[36559] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1828(v);
}

void	small_parse_table_1828(t_small_parse_table_array *v)
{
	v->a[36560] = actions(1082);
	v->a[36561] = 2;
	v->a[36562] = anon_sym_LT;
	v->a[36563] = anon_sym_GT;
	v->a[36564] = actions(1084);
	v->a[36565] = 2;
	v->a[36566] = anon_sym_GT_GT;
	v->a[36567] = anon_sym_LT_LT;
	v->a[36568] = actions(1086);
	v->a[36569] = 2;
	v->a[36570] = anon_sym_LT_EQ;
	v->a[36571] = anon_sym_GT_EQ;
	v->a[36572] = actions(1088);
	v->a[36573] = 2;
	v->a[36574] = anon_sym_PLUS;
	v->a[36575] = anon_sym_DASH;
	v->a[36576] = actions(1092);
	v->a[36577] = 2;
	v->a[36578] = anon_sym_PLUS_PLUS2;
	v->a[36579] = anon_sym_DASH_DASH2;
	small_parse_table_1829(v);
}

void	small_parse_table_1829(t_small_parse_table_array *v)
{
	v->a[36580] = actions(1116);
	v->a[36581] = 2;
	v->a[36582] = anon_sym_EQ_EQ;
	v->a[36583] = anon_sym_BANG_EQ;
	v->a[36584] = actions(1090);
	v->a[36585] = 3;
	v->a[36586] = anon_sym_STAR;
	v->a[36587] = anon_sym_SLASH;
	v->a[36588] = anon_sym_PERCENT;
	v->a[36589] = actions(1288);
	v->a[36590] = 10;
	v->a[36591] = anon_sym_PLUS_EQ;
	v->a[36592] = anon_sym_DASH_EQ;
	v->a[36593] = anon_sym_STAR_EQ;
	v->a[36594] = anon_sym_SLASH_EQ;
	v->a[36595] = anon_sym_PERCENT_EQ;
	v->a[36596] = anon_sym_LT_LT_EQ;
	v->a[36597] = anon_sym_GT_GT_EQ;
	v->a[36598] = anon_sym_AMP_EQ;
	v->a[36599] = anon_sym_CARET_EQ;
	small_parse_table_1830(v);
}

/* EOF small_parse_table_365.c */
