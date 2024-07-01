/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_498.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2490(t_small_parse_table_array *v)
{
	v->a[49800] = sym_file_descriptor;
	v->a[49801] = actions(678);
	v->a[49802] = 8;
	v->a[49803] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49804] = anon_sym_DOLLAR;
	v->a[49805] = anon_sym_DQUOTE;
	v->a[49806] = sym_raw_string;
	v->a[49807] = sym_number;
	v->a[49808] = anon_sym_DOLLAR_LBRACE;
	v->a[49809] = anon_sym_DOLLAR_LPAREN;
	v->a[49810] = sym_word;
	v->a[49811] = actions(1553);
	v->a[49812] = 18;
	v->a[49813] = anon_sym_PIPE;
	v->a[49814] = anon_sym_SEMI_SEMI;
	v->a[49815] = anon_sym_AMP_AMP;
	v->a[49816] = anon_sym_PIPE_PIPE;
	v->a[49817] = anon_sym_LT;
	v->a[49818] = anon_sym_GT;
	v->a[49819] = anon_sym_GT_GT;
	small_parse_table_2491(v);
}

void	small_parse_table_2491(t_small_parse_table_array *v)
{
	v->a[49820] = anon_sym_LT_AMP;
	v->a[49821] = anon_sym_GT_AMP;
	v->a[49822] = anon_sym_GT_PIPE;
	v->a[49823] = anon_sym_LT_AMP_DASH;
	v->a[49824] = anon_sym_GT_AMP_DASH;
	v->a[49825] = anon_sym_LT_LT;
	v->a[49826] = anon_sym_LT_LT_DASH;
	v->a[49827] = aux_sym_heredoc_redirect_token1;
	v->a[49828] = anon_sym_AMP;
	v->a[49829] = anon_sym_BQUOTE;
	v->a[49830] = anon_sym_SEMI;
	v->a[49831] = 6;
	v->a[49832] = actions(3);
	v->a[49833] = 1;
	v->a[49834] = sym_comment;
	v->a[49835] = actions(1530);
	v->a[49836] = 1;
	v->a[49837] = sym_file_descriptor;
	v->a[49838] = actions(1533);
	v->a[49839] = 1;
	small_parse_table_2492(v);
}

void	small_parse_table_2492(t_small_parse_table_array *v)
{
	v->a[49840] = sym_variable_name;
	v->a[49841] = actions(1520);
	v->a[49842] = 8;
	v->a[49843] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49844] = anon_sym_DOLLAR;
	v->a[49845] = anon_sym_DQUOTE;
	v->a[49846] = sym_raw_string;
	v->a[49847] = sym_number;
	v->a[49848] = anon_sym_DOLLAR_LBRACE;
	v->a[49849] = anon_sym_DOLLAR_LPAREN;
	v->a[49850] = sym_word;
	v->a[49851] = actions(1522);
	v->a[49852] = 9;
	v->a[49853] = anon_sym_PIPE;
	v->a[49854] = anon_sym_SEMI_SEMI;
	v->a[49855] = anon_sym_AMP_AMP;
	v->a[49856] = anon_sym_PIPE_PIPE;
	v->a[49857] = anon_sym_LT_LT;
	v->a[49858] = anon_sym_LT_LT_DASH;
	v->a[49859] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2493(v);
}

void	small_parse_table_2493(t_small_parse_table_array *v)
{
	v->a[49860] = anon_sym_AMP;
	v->a[49861] = anon_sym_SEMI;
	v->a[49862] = actions(1527);
	v->a[49863] = 9;
	v->a[49864] = anon_sym_LT;
	v->a[49865] = anon_sym_GT;
	v->a[49866] = anon_sym_GT_GT;
	v->a[49867] = anon_sym_LT_AMP;
	v->a[49868] = anon_sym_GT_AMP;
	v->a[49869] = anon_sym_GT_PIPE;
	v->a[49870] = anon_sym_LT_AMP_DASH;
	v->a[49871] = anon_sym_GT_AMP_DASH;
	v->a[49872] = anon_sym_BQUOTE;
	v->a[49873] = 4;
	v->a[49874] = actions(3);
	v->a[49875] = 1;
	v->a[49876] = sym_comment;
	v->a[49877] = actions(1686);
	v->a[49878] = 1;
	v->a[49879] = ts_builtin_sym_end;
	small_parse_table_2494(v);
}

void	small_parse_table_2494(t_small_parse_table_array *v)
{
	v->a[49880] = actions(1577);
	v->a[49881] = 2;
	v->a[49882] = sym_file_descriptor;
	v->a[49883] = sym_variable_name;
	v->a[49884] = actions(1573);
	v->a[49885] = 25;
	v->a[49886] = anon_sym_for;
	v->a[49887] = anon_sym_while;
	v->a[49888] = anon_sym_until;
	v->a[49889] = anon_sym_if;
	v->a[49890] = anon_sym_case;
	v->a[49891] = anon_sym_LPAREN;
	v->a[49892] = anon_sym_LBRACE;
	v->a[49893] = anon_sym_BANG;
	v->a[49894] = anon_sym_LT;
	v->a[49895] = anon_sym_GT;
	v->a[49896] = anon_sym_GT_GT;
	v->a[49897] = anon_sym_LT_AMP;
	v->a[49898] = anon_sym_GT_AMP;
	v->a[49899] = anon_sym_GT_PIPE;
	small_parse_table_2495(v);
}

/* EOF small_parse_table_498.c */
