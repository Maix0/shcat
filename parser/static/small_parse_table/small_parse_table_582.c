/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_582.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2910(t_small_parse_table_array *v)
{
	v->a[58200] = actions(1651);
	v->a[58201] = 1;
	v->a[58202] = anon_sym_BQUOTE;
	v->a[58203] = actions(1653);
	v->a[58204] = 1;
	v->a[58205] = sym_extglob_pattern;
	v->a[58206] = state(1123);
	v->a[58207] = 1;
	v->a[58208] = aux_sym_case_statement_repeat1;
	v->a[58209] = state(1713);
	v->a[58210] = 1;
	v->a[58211] = sym_case_item;
	v->a[58212] = state(2077);
	v->a[58213] = 1;
	v->a[58214] = sym__case_item_last;
	v->a[58215] = state(1873);
	v->a[58216] = 2;
	v->a[58217] = sym_concatenation;
	v->a[58218] = sym__extglob_blob;
	v->a[58219] = actions(1633);
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = 3;
	v->a[58221] = sym_raw_string;
	v->a[58222] = sym_number;
	v->a[58223] = sym_word;
	v->a[58224] = state(1806);
	v->a[58225] = 5;
	v->a[58226] = sym_arithmetic_expansion;
	v->a[58227] = sym_string;
	v->a[58228] = sym_simple_expansion;
	v->a[58229] = sym_expansion;
	v->a[58230] = sym_command_substitution;
	v->a[58231] = 3;
	v->a[58232] = actions(3);
	v->a[58233] = 1;
	v->a[58234] = sym_comment;
	v->a[58235] = actions(1178);
	v->a[58236] = 4;
	v->a[58237] = sym_file_descriptor;
	v->a[58238] = sym__concat;
	v->a[58239] = sym_variable_name;
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = aux_sym_heredoc_redirect_token1;
	v->a[58241] = actions(1180);
	v->a[58242] = 17;
	v->a[58243] = anon_sym_esac;
	v->a[58244] = anon_sym_PIPE;
	v->a[58245] = anon_sym_SEMI_SEMI;
	v->a[58246] = anon_sym_AMP_AMP;
	v->a[58247] = anon_sym_PIPE_PIPE;
	v->a[58248] = anon_sym_LT;
	v->a[58249] = anon_sym_GT;
	v->a[58250] = anon_sym_GT_GT;
	v->a[58251] = anon_sym_LT_AMP;
	v->a[58252] = anon_sym_GT_AMP;
	v->a[58253] = anon_sym_GT_PIPE;
	v->a[58254] = anon_sym_LT_GT;
	v->a[58255] = anon_sym_LT_LT;
	v->a[58256] = anon_sym_LT_LT_DASH;
	v->a[58257] = anon_sym_AMP;
	v->a[58258] = aux_sym_concatenation_token1;
	v->a[58259] = anon_sym_SEMI;
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = 12;
	v->a[58261] = actions(3);
	v->a[58262] = 1;
	v->a[58263] = sym_comment;
	v->a[58264] = actions(1067);
	v->a[58265] = 1;
	v->a[58266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58267] = actions(1069);
	v->a[58268] = 1;
	v->a[58269] = anon_sym_DOLLAR;
	v->a[58270] = actions(1071);
	v->a[58271] = 1;
	v->a[58272] = anon_sym_DQUOTE;
	v->a[58273] = actions(1073);
	v->a[58274] = 1;
	v->a[58275] = anon_sym_DOLLAR_LBRACE;
	v->a[58276] = actions(1075);
	v->a[58277] = 1;
	v->a[58278] = anon_sym_DOLLAR_LPAREN;
	v->a[58279] = actions(1077);
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = 1;
	v->a[58281] = anon_sym_BQUOTE;
	v->a[58282] = state(1913);
	v->a[58283] = 1;
	v->a[58284] = sym_terminator;
	v->a[58285] = state(1192);
	v->a[58286] = 2;
	v->a[58287] = sym_concatenation;
	v->a[58288] = aux_sym_for_statement_repeat1;
	v->a[58289] = actions(1964);
	v->a[58290] = 3;
	v->a[58291] = sym_raw_string;
	v->a[58292] = sym_number;
	v->a[58293] = sym_word;
	v->a[58294] = actions(1966);
	v->a[58295] = 4;
	v->a[58296] = anon_sym_SEMI_SEMI;
	v->a[58297] = aux_sym_heredoc_redirect_token1;
	v->a[58298] = anon_sym_AMP;
	v->a[58299] = anon_sym_SEMI;
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
