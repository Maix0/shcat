/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_722.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3610(t_small_parse_table_array *v)
{
	v->a[72200] = actions(1895);
	v->a[72201] = 1;
	v->a[72202] = sym_extglob_pattern;
	v->a[72203] = actions(2438);
	v->a[72204] = 1;
	v->a[72205] = anon_sym_esac;
	v->a[72206] = state(1350);
	v->a[72207] = 1;
	v->a[72208] = aux_sym_case_statement_repeat1;
	v->a[72209] = state(1923);
	v->a[72210] = 1;
	v->a[72211] = sym_case_item;
	v->a[72212] = state(2174);
	v->a[72213] = 1;
	v->a[72214] = sym__case_item_last;
	v->a[72215] = state(2078);
	v->a[72216] = 2;
	v->a[72217] = sym_concatenation;
	v->a[72218] = sym__extglob_blob;
	v->a[72219] = actions(1875);
	small_parse_table_3611(v);
}

void	small_parse_table_3611(t_small_parse_table_array *v)
{
	v->a[72220] = 3;
	v->a[72221] = sym_raw_string;
	v->a[72222] = sym_number;
	v->a[72223] = sym_word;
	v->a[72224] = state(2004);
	v->a[72225] = 5;
	v->a[72226] = sym_arithmetic_expansion;
	v->a[72227] = sym_string;
	v->a[72228] = sym_simple_expansion;
	v->a[72229] = sym_expansion;
	v->a[72230] = sym_command_substitution;
	v->a[72231] = 16;
	v->a[72232] = actions(3);
	v->a[72233] = 1;
	v->a[72234] = sym_comment;
	v->a[72235] = actions(1879);
	v->a[72236] = 1;
	v->a[72237] = anon_sym_LPAREN;
	v->a[72238] = actions(1883);
	v->a[72239] = 1;
	small_parse_table_3612(v);
}

void	small_parse_table_3612(t_small_parse_table_array *v)
{
	v->a[72240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72241] = actions(1885);
	v->a[72242] = 1;
	v->a[72243] = anon_sym_DOLLAR;
	v->a[72244] = actions(1887);
	v->a[72245] = 1;
	v->a[72246] = anon_sym_DQUOTE;
	v->a[72247] = actions(1889);
	v->a[72248] = 1;
	v->a[72249] = anon_sym_DOLLAR_LBRACE;
	v->a[72250] = actions(1891);
	v->a[72251] = 1;
	v->a[72252] = anon_sym_DOLLAR_LPAREN;
	v->a[72253] = actions(1893);
	v->a[72254] = 1;
	v->a[72255] = anon_sym_BQUOTE;
	v->a[72256] = actions(1895);
	v->a[72257] = 1;
	v->a[72258] = sym_extglob_pattern;
	v->a[72259] = actions(1901);
	small_parse_table_3613(v);
}

void	small_parse_table_3613(t_small_parse_table_array *v)
{
	v->a[72260] = 1;
	v->a[72261] = anon_sym_esac;
	v->a[72262] = state(1382);
	v->a[72263] = 1;
	v->a[72264] = aux_sym_case_statement_repeat1;
	v->a[72265] = state(1923);
	v->a[72266] = 1;
	v->a[72267] = sym_case_item;
	v->a[72268] = state(2181);
	v->a[72269] = 1;
	v->a[72270] = sym__case_item_last;
	v->a[72271] = state(2078);
	v->a[72272] = 2;
	v->a[72273] = sym_concatenation;
	v->a[72274] = sym__extglob_blob;
	v->a[72275] = actions(1875);
	v->a[72276] = 3;
	v->a[72277] = sym_raw_string;
	v->a[72278] = sym_number;
	v->a[72279] = sym_word;
	small_parse_table_3614(v);
}

void	small_parse_table_3614(t_small_parse_table_array *v)
{
	v->a[72280] = state(2004);
	v->a[72281] = 5;
	v->a[72282] = sym_arithmetic_expansion;
	v->a[72283] = sym_string;
	v->a[72284] = sym_simple_expansion;
	v->a[72285] = sym_expansion;
	v->a[72286] = sym_command_substitution;
	v->a[72287] = 5;
	v->a[72288] = actions(3);
	v->a[72289] = 1;
	v->a[72290] = sym_comment;
	v->a[72291] = actions(2442);
	v->a[72292] = 1;
	v->a[72293] = anon_sym_PIPE;
	v->a[72294] = state(1304);
	v->a[72295] = 1;
	v->a[72296] = aux_sym_pipeline_repeat1;
	v->a[72297] = actions(2440);
	v->a[72298] = 3;
	v->a[72299] = sym_file_descriptor;
	small_parse_table_3615(v);
}

/* EOF small_parse_table_722.c */
