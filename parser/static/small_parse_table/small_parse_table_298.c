/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_298.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1490(t_small_parse_table_array *v)
{
	v->a[29800] = sym_comment;
	v->a[29801] = actions(1021);
	v->a[29802] = 1;
	v->a[29803] = anon_sym_EQ;
	v->a[29804] = actions(1023);
	v->a[29805] = 1;
	v->a[29806] = anon_sym_QMARK;
	v->a[29807] = actions(1146);
	v->a[29808] = 1;
	v->a[29809] = anon_sym_RPAREN_RPAREN;
	v->a[29810] = actions(850);
	v->a[29811] = 2;
	v->a[29812] = anon_sym_LT;
	v->a[29813] = anon_sym_GT;
	v->a[29814] = actions(852);
	v->a[29815] = 2;
	v->a[29816] = anon_sym_GT_GT;
	v->a[29817] = anon_sym_LT_LT;
	v->a[29818] = actions(860);
	v->a[29819] = 2;
	small_parse_table_1491(v);
}

void	small_parse_table_1491(t_small_parse_table_array *v)
{
	v->a[29820] = anon_sym_EQ_EQ;
	v->a[29821] = anon_sym_BANG_EQ;
	v->a[29822] = actions(862);
	v->a[29823] = 2;
	v->a[29824] = anon_sym_LT_EQ;
	v->a[29825] = anon_sym_GT_EQ;
	v->a[29826] = actions(864);
	v->a[29827] = 2;
	v->a[29828] = anon_sym_PLUS;
	v->a[29829] = anon_sym_DASH;
	v->a[29830] = actions(868);
	v->a[29831] = 2;
	v->a[29832] = anon_sym_PLUS_PLUS2;
	v->a[29833] = anon_sym_DASH_DASH2;
	v->a[29834] = actions(866);
	v->a[29835] = 3;
	v->a[29836] = anon_sym_STAR;
	v->a[29837] = anon_sym_SLASH;
	v->a[29838] = anon_sym_PERCENT;
	v->a[29839] = actions(1079);
	small_parse_table_1492(v);
}

void	small_parse_table_1492(t_small_parse_table_array *v)
{
	v->a[29840] = 10;
	v->a[29841] = anon_sym_PLUS_EQ;
	v->a[29842] = anon_sym_DASH_EQ;
	v->a[29843] = anon_sym_STAR_EQ;
	v->a[29844] = anon_sym_SLASH_EQ;
	v->a[29845] = anon_sym_PERCENT_EQ;
	v->a[29846] = anon_sym_LT_LT_EQ;
	v->a[29847] = anon_sym_GT_GT_EQ;
	v->a[29848] = anon_sym_AMP_EQ;
	v->a[29849] = anon_sym_CARET_EQ;
	v->a[29850] = anon_sym_PIPE_EQ;
	v->a[29851] = 6;
	v->a[29852] = actions(3);
	v->a[29853] = 1;
	v->a[29854] = sym_comment;
	v->a[29855] = actions(1099);
	v->a[29856] = 1;
	v->a[29857] = aux_sym_concatenation_token1;
	v->a[29858] = actions(1148);
	v->a[29859] = 1;
	small_parse_table_1493(v);
}

void	small_parse_table_1493(t_small_parse_table_array *v)
{
	v->a[29860] = sym__concat;
	v->a[29861] = state(395);
	v->a[29862] = 1;
	v->a[29863] = aux_sym_concatenation_repeat1;
	v->a[29864] = actions(1085);
	v->a[29865] = 3;
	v->a[29866] = sym_file_descriptor;
	v->a[29867] = sym__bare_dollar;
	v->a[29868] = ts_builtin_sym_end;
	v->a[29869] = actions(1081);
	v->a[29870] = 27;
	v->a[29871] = anon_sym_LPAREN;
	v->a[29872] = anon_sym_PIPE;
	v->a[29873] = anon_sym_SEMI_SEMI;
	v->a[29874] = anon_sym_AMP_AMP;
	v->a[29875] = anon_sym_PIPE_PIPE;
	v->a[29876] = anon_sym_LT;
	v->a[29877] = anon_sym_GT;
	v->a[29878] = anon_sym_GT_GT;
	v->a[29879] = anon_sym_LT_AMP;
	small_parse_table_1494(v);
}

void	small_parse_table_1494(t_small_parse_table_array *v)
{
	v->a[29880] = anon_sym_GT_AMP;
	v->a[29881] = anon_sym_GT_PIPE;
	v->a[29882] = anon_sym_LT_AMP_DASH;
	v->a[29883] = anon_sym_GT_AMP_DASH;
	v->a[29884] = anon_sym_LT_LT;
	v->a[29885] = anon_sym_LT_LT_DASH;
	v->a[29886] = aux_sym_heredoc_redirect_token1;
	v->a[29887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29888] = anon_sym_AMP;
	v->a[29889] = anon_sym_DOLLAR;
	v->a[29890] = anon_sym_DQUOTE;
	v->a[29891] = sym_raw_string;
	v->a[29892] = sym_number;
	v->a[29893] = anon_sym_DOLLAR_LBRACE;
	v->a[29894] = anon_sym_DOLLAR_LPAREN;
	v->a[29895] = anon_sym_BQUOTE;
	v->a[29896] = sym_word;
	v->a[29897] = anon_sym_SEMI;
	v->a[29898] = 17;
	v->a[29899] = actions(842);
	small_parse_table_1495(v);
}

/* EOF small_parse_table_298.c */
