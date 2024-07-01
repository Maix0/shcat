/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_602.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3010(t_small_parse_table_array *v)
{
	v->a[60200] = anon_sym_DOLLAR;
	v->a[60201] = actions(1642);
	v->a[60202] = 1;
	v->a[60203] = anon_sym_DQUOTE;
	v->a[60204] = actions(1644);
	v->a[60205] = 1;
	v->a[60206] = anon_sym_DOLLAR_LBRACE;
	v->a[60207] = actions(1646);
	v->a[60208] = 1;
	v->a[60209] = anon_sym_DOLLAR_LPAREN;
	v->a[60210] = actions(1648);
	v->a[60211] = 1;
	v->a[60212] = anon_sym_BQUOTE;
	v->a[60213] = actions(1650);
	v->a[60214] = 1;
	v->a[60215] = sym_extglob_pattern;
	v->a[60216] = state(1139);
	v->a[60217] = 1;
	v->a[60218] = aux_sym_case_statement_repeat1;
	v->a[60219] = state(1713);
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = 1;
	v->a[60221] = sym_case_item;
	v->a[60222] = state(1965);
	v->a[60223] = 1;
	v->a[60224] = sym__case_item_last;
	v->a[60225] = state(1871);
	v->a[60226] = 2;
	v->a[60227] = sym_concatenation;
	v->a[60228] = sym__extglob_blob;
	v->a[60229] = actions(1630);
	v->a[60230] = 3;
	v->a[60231] = sym_raw_string;
	v->a[60232] = sym_number;
	v->a[60233] = sym_word;
	v->a[60234] = state(1804);
	v->a[60235] = 5;
	v->a[60236] = sym_arithmetic_expansion;
	v->a[60237] = sym_string;
	v->a[60238] = sym_simple_expansion;
	v->a[60239] = sym_expansion;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = sym_command_substitution;
	v->a[60241] = 6;
	v->a[60242] = actions(3);
	v->a[60243] = 1;
	v->a[60244] = sym_comment;
	v->a[60245] = actions(1845);
	v->a[60246] = 1;
	v->a[60247] = aux_sym_concatenation_token1;
	v->a[60248] = actions(1847);
	v->a[60249] = 1;
	v->a[60250] = sym__concat;
	v->a[60251] = state(1084);
	v->a[60252] = 1;
	v->a[60253] = aux_sym_concatenation_repeat1;
	v->a[60254] = actions(1209);
	v->a[60255] = 3;
	v->a[60256] = sym_file_descriptor;
	v->a[60257] = sym_variable_name;
	v->a[60258] = aux_sym_heredoc_redirect_token1;
	v->a[60259] = actions(1207);
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = 15;
	v->a[60261] = anon_sym_PIPE;
	v->a[60262] = anon_sym_SEMI_SEMI;
	v->a[60263] = anon_sym_AMP_AMP;
	v->a[60264] = anon_sym_PIPE_PIPE;
	v->a[60265] = anon_sym_LT;
	v->a[60266] = anon_sym_GT;
	v->a[60267] = anon_sym_GT_GT;
	v->a[60268] = anon_sym_LT_AMP;
	v->a[60269] = anon_sym_GT_AMP;
	v->a[60270] = anon_sym_GT_PIPE;
	v->a[60271] = anon_sym_LT_GT;
	v->a[60272] = anon_sym_LT_LT;
	v->a[60273] = anon_sym_LT_LT_DASH;
	v->a[60274] = anon_sym_AMP;
	v->a[60275] = anon_sym_SEMI;
	v->a[60276] = 12;
	v->a[60277] = actions(3);
	v->a[60278] = 1;
	v->a[60279] = sym_comment;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = actions(1074);
	v->a[60281] = 1;
	v->a[60282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60283] = actions(1076);
	v->a[60284] = 1;
	v->a[60285] = anon_sym_DOLLAR;
	v->a[60286] = actions(1078);
	v->a[60287] = 1;
	v->a[60288] = anon_sym_DQUOTE;
	v->a[60289] = actions(1080);
	v->a[60290] = 1;
	v->a[60291] = anon_sym_DOLLAR_LBRACE;
	v->a[60292] = actions(1082);
	v->a[60293] = 1;
	v->a[60294] = anon_sym_DOLLAR_LPAREN;
	v->a[60295] = actions(1084);
	v->a[60296] = 1;
	v->a[60297] = anon_sym_BQUOTE;
	v->a[60298] = state(1891);
	v->a[60299] = 1;
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
