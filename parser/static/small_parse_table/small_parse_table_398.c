/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_398.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1990(t_small_parse_table_array *v)
{
	v->a[39800] = 2;
	v->a[39801] = anon_sym_AMP_AMP;
	v->a[39802] = anon_sym_PIPE_PIPE;
	v->a[39803] = state(1286);
	v->a[39804] = 2;
	v->a[39805] = sym_variable_assignment;
	v->a[39806] = aux_sym__variable_assignments_repeat1;
	v->a[39807] = state(1354);
	v->a[39808] = 3;
	v->a[39809] = sym_file_redirect;
	v->a[39810] = sym_heredoc_redirect;
	v->a[39811] = aux_sym_redirected_statement_repeat1;
	v->a[39812] = actions(690);
	v->a[39813] = 16;
	v->a[39814] = anon_sym_LT;
	v->a[39815] = anon_sym_GT;
	v->a[39816] = anon_sym_GT_GT;
	v->a[39817] = anon_sym_LT_AMP;
	v->a[39818] = anon_sym_GT_AMP;
	v->a[39819] = anon_sym_GT_PIPE;
	small_parse_table_1991(v);
}

void	small_parse_table_1991(t_small_parse_table_array *v)
{
	v->a[39820] = anon_sym_LT_GT;
	v->a[39821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39822] = anon_sym_DOLLAR;
	v->a[39823] = anon_sym_DQUOTE;
	v->a[39824] = sym_raw_string;
	v->a[39825] = sym_number;
	v->a[39826] = anon_sym_DOLLAR_LBRACE;
	v->a[39827] = anon_sym_DOLLAR_LPAREN;
	v->a[39828] = anon_sym_BQUOTE;
	v->a[39829] = sym_word;
	v->a[39830] = 3;
	v->a[39831] = actions(3);
	v->a[39832] = 1;
	v->a[39833] = sym_comment;
	v->a[39834] = actions(744);
	v->a[39835] = 3;
	v->a[39836] = sym_file_descriptor;
	v->a[39837] = sym__concat;
	v->a[39838] = ts_builtin_sym_end;
	v->a[39839] = actions(742);
	small_parse_table_1992(v);
}

void	small_parse_table_1992(t_small_parse_table_array *v)
{
	v->a[39840] = 26;
	v->a[39841] = anon_sym_PIPE;
	v->a[39842] = anon_sym_SEMI_SEMI;
	v->a[39843] = anon_sym_AMP_AMP;
	v->a[39844] = anon_sym_PIPE_PIPE;
	v->a[39845] = anon_sym_LT;
	v->a[39846] = anon_sym_GT;
	v->a[39847] = anon_sym_GT_GT;
	v->a[39848] = anon_sym_LT_AMP;
	v->a[39849] = anon_sym_GT_AMP;
	v->a[39850] = anon_sym_GT_PIPE;
	v->a[39851] = anon_sym_LT_GT;
	v->a[39852] = anon_sym_LT_LT;
	v->a[39853] = anon_sym_LT_LT_DASH;
	v->a[39854] = aux_sym_heredoc_redirect_token1;
	v->a[39855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39856] = anon_sym_AMP;
	v->a[39857] = aux_sym_concatenation_token1;
	v->a[39858] = anon_sym_DOLLAR;
	v->a[39859] = anon_sym_DQUOTE;
	small_parse_table_1993(v);
}

void	small_parse_table_1993(t_small_parse_table_array *v)
{
	v->a[39860] = sym_raw_string;
	v->a[39861] = sym_number;
	v->a[39862] = anon_sym_DOLLAR_LBRACE;
	v->a[39863] = anon_sym_DOLLAR_LPAREN;
	v->a[39864] = anon_sym_BQUOTE;
	v->a[39865] = sym_word;
	v->a[39866] = anon_sym_SEMI;
	v->a[39867] = 6;
	v->a[39868] = actions(3);
	v->a[39869] = 1;
	v->a[39870] = sym_comment;
	v->a[39871] = actions(361);
	v->a[39872] = 1;
	v->a[39873] = sym_file_descriptor;
	v->a[39874] = actions(1273);
	v->a[39875] = 1;
	v->a[39876] = sym_variable_name;
	v->a[39877] = actions(1271);
	v->a[39878] = 2;
	v->a[39879] = aux_sym__simple_variable_name_token1;
	small_parse_table_1994(v);
}

void	small_parse_table_1994(t_small_parse_table_array *v)
{
	v->a[39880] = aux_sym__multiline_variable_name_token1;
	v->a[39881] = actions(1269);
	v->a[39882] = 9;
	v->a[39883] = anon_sym_BANG;
	v->a[39884] = anon_sym_DASH;
	v->a[39885] = anon_sym_STAR;
	v->a[39886] = anon_sym_QMARK;
	v->a[39887] = anon_sym_DOLLAR;
	v->a[39888] = anon_sym_POUND;
	v->a[39889] = anon_sym_AT;
	v->a[39890] = anon_sym_0;
	v->a[39891] = anon_sym__;
	v->a[39892] = actions(363);
	v->a[39893] = 16;
	v->a[39894] = anon_sym_PIPE;
	v->a[39895] = anon_sym_SEMI_SEMI;
	v->a[39896] = anon_sym_AMP_AMP;
	v->a[39897] = anon_sym_PIPE_PIPE;
	v->a[39898] = anon_sym_LT;
	v->a[39899] = anon_sym_GT;
	small_parse_table_1995(v);
}

/* EOF small_parse_table_398.c */
