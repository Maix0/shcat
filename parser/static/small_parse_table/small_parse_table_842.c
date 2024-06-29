/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_842.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4210(t_small_parse_table_array *v)
{
	v->a[84200] = actions(815);
	v->a[84201] = 1;
	v->a[84202] = anon_sym_DOLLAR;
	v->a[84203] = actions(817);
	v->a[84204] = 1;
	v->a[84205] = anon_sym_DQUOTE;
	v->a[84206] = actions(819);
	v->a[84207] = 1;
	v->a[84208] = anon_sym_DOLLAR_LBRACE;
	v->a[84209] = actions(821);
	v->a[84210] = 1;
	v->a[84211] = anon_sym_DOLLAR_LPAREN;
	v->a[84212] = actions(823);
	v->a[84213] = 1;
	v->a[84214] = anon_sym_BQUOTE;
	v->a[84215] = state(230);
	v->a[84216] = 2;
	v->a[84217] = sym_concatenation;
	v->a[84218] = aux_sym_for_statement_repeat1;
	v->a[84219] = actions(811);
	small_parse_table_4211(v);
}

void	small_parse_table_4211(t_small_parse_table_array *v)
{
	v->a[84220] = 3;
	v->a[84221] = sym_raw_string;
	v->a[84222] = sym_number;
	v->a[84223] = sym_word;
	v->a[84224] = state(506);
	v->a[84225] = 5;
	v->a[84226] = sym_arithmetic_expansion;
	v->a[84227] = sym_string;
	v->a[84228] = sym_simple_expansion;
	v->a[84229] = sym_expansion;
	v->a[84230] = sym_command_substitution;
	v->a[84231] = 3;
	v->a[84232] = actions(1074);
	v->a[84233] = 1;
	v->a[84234] = sym_comment;
	v->a[84235] = actions(2356);
	v->a[84236] = 7;
	v->a[84237] = anon_sym_PIPE;
	v->a[84238] = anon_sym_LT;
	v->a[84239] = anon_sym_GT;
	small_parse_table_4212(v);
}

void	small_parse_table_4212(t_small_parse_table_array *v)
{
	v->a[84240] = anon_sym_AMP_GT;
	v->a[84241] = anon_sym_LT_AMP;
	v->a[84242] = anon_sym_GT_AMP;
	v->a[84243] = anon_sym_LT_LT;
	v->a[84244] = actions(2354);
	v->a[84245] = 9;
	v->a[84246] = sym_file_descriptor;
	v->a[84247] = anon_sym_AMP_AMP;
	v->a[84248] = anon_sym_PIPE_PIPE;
	v->a[84249] = anon_sym_GT_GT;
	v->a[84250] = anon_sym_AMP_GT_GT;
	v->a[84251] = anon_sym_GT_PIPE;
	v->a[84252] = anon_sym_LT_AMP_DASH;
	v->a[84253] = anon_sym_GT_AMP_DASH;
	v->a[84254] = anon_sym_LT_LT_DASH;
	v->a[84255] = 3;
	v->a[84256] = actions(1074);
	v->a[84257] = 1;
	v->a[84258] = sym_comment;
	v->a[84259] = actions(2360);
	small_parse_table_4213(v);
}

void	small_parse_table_4213(t_small_parse_table_array *v)
{
	v->a[84260] = 7;
	v->a[84261] = anon_sym_PIPE;
	v->a[84262] = anon_sym_LT;
	v->a[84263] = anon_sym_GT;
	v->a[84264] = anon_sym_AMP_GT;
	v->a[84265] = anon_sym_LT_AMP;
	v->a[84266] = anon_sym_GT_AMP;
	v->a[84267] = anon_sym_LT_LT;
	v->a[84268] = actions(2358);
	v->a[84269] = 9;
	v->a[84270] = sym_file_descriptor;
	v->a[84271] = anon_sym_AMP_AMP;
	v->a[84272] = anon_sym_PIPE_PIPE;
	v->a[84273] = anon_sym_GT_GT;
	v->a[84274] = anon_sym_AMP_GT_GT;
	v->a[84275] = anon_sym_GT_PIPE;
	v->a[84276] = anon_sym_LT_AMP_DASH;
	v->a[84277] = anon_sym_GT_AMP_DASH;
	v->a[84278] = anon_sym_LT_LT_DASH;
	v->a[84279] = 3;
	small_parse_table_4214(v);
}

void	small_parse_table_4214(t_small_parse_table_array *v)
{
	v->a[84280] = actions(1074);
	v->a[84281] = 1;
	v->a[84282] = sym_comment;
	v->a[84283] = actions(2356);
	v->a[84284] = 7;
	v->a[84285] = anon_sym_PIPE;
	v->a[84286] = anon_sym_LT;
	v->a[84287] = anon_sym_GT;
	v->a[84288] = anon_sym_AMP_GT;
	v->a[84289] = anon_sym_LT_AMP;
	v->a[84290] = anon_sym_GT_AMP;
	v->a[84291] = anon_sym_LT_LT;
	v->a[84292] = actions(2354);
	v->a[84293] = 9;
	v->a[84294] = sym_file_descriptor;
	v->a[84295] = anon_sym_AMP_AMP;
	v->a[84296] = anon_sym_PIPE_PIPE;
	v->a[84297] = anon_sym_GT_GT;
	v->a[84298] = anon_sym_AMP_GT_GT;
	v->a[84299] = anon_sym_GT_PIPE;
	small_parse_table_4215(v);
}

/* EOF small_parse_table_842.c */
