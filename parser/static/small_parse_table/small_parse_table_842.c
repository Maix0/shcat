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
	v->a[84200] = actions(870);
	v->a[84201] = 1;
	v->a[84202] = sym_comment;
	v->a[84203] = actions(2363);
	v->a[84204] = 6;
	v->a[84205] = anon_sym_PIPE;
	v->a[84206] = anon_sym_LT;
	v->a[84207] = anon_sym_GT;
	v->a[84208] = anon_sym_LT_AMP;
	v->a[84209] = anon_sym_GT_AMP;
	v->a[84210] = anon_sym_LT_LT;
	v->a[84211] = actions(2361);
	v->a[84212] = 8;
	v->a[84213] = sym_file_descriptor;
	v->a[84214] = anon_sym_AMP_AMP;
	v->a[84215] = anon_sym_PIPE_PIPE;
	v->a[84216] = anon_sym_GT_GT;
	v->a[84217] = anon_sym_GT_PIPE;
	v->a[84218] = anon_sym_LT_AMP_DASH;
	v->a[84219] = anon_sym_GT_AMP_DASH;
	small_parse_table_4211(v);
}

void	small_parse_table_4211(t_small_parse_table_array *v)
{
	v->a[84220] = anon_sym_LT_LT_DASH;
	v->a[84221] = 3;
	v->a[84222] = actions(870);
	v->a[84223] = 1;
	v->a[84224] = sym_comment;
	v->a[84225] = actions(2363);
	v->a[84226] = 6;
	v->a[84227] = anon_sym_PIPE;
	v->a[84228] = anon_sym_LT;
	v->a[84229] = anon_sym_GT;
	v->a[84230] = anon_sym_LT_AMP;
	v->a[84231] = anon_sym_GT_AMP;
	v->a[84232] = anon_sym_LT_LT;
	v->a[84233] = actions(2361);
	v->a[84234] = 8;
	v->a[84235] = sym_file_descriptor;
	v->a[84236] = anon_sym_AMP_AMP;
	v->a[84237] = anon_sym_PIPE_PIPE;
	v->a[84238] = anon_sym_GT_GT;
	v->a[84239] = anon_sym_GT_PIPE;
	small_parse_table_4212(v);
}

void	small_parse_table_4212(t_small_parse_table_array *v)
{
	v->a[84240] = anon_sym_LT_AMP_DASH;
	v->a[84241] = anon_sym_GT_AMP_DASH;
	v->a[84242] = anon_sym_LT_LT_DASH;
	v->a[84243] = 6;
	v->a[84244] = actions(3);
	v->a[84245] = 1;
	v->a[84246] = sym_comment;
	v->a[84247] = actions(3191);
	v->a[84248] = 1;
	v->a[84249] = sym_string_content;
	v->a[84250] = actions(3195);
	v->a[84251] = 1;
	v->a[84252] = sym_variable_name;
	v->a[84253] = actions(3298);
	v->a[84254] = 1;
	v->a[84255] = anon_sym_DQUOTE;
	v->a[84256] = actions(3193);
	v->a[84257] = 2;
	v->a[84258] = aux_sym__simple_variable_name_token1;
	v->a[84259] = aux_sym__multiline_variable_name_token1;
	small_parse_table_4213(v);
}

void	small_parse_table_4213(t_small_parse_table_array *v)
{
	v->a[84260] = actions(3187);
	v->a[84261] = 9;
	v->a[84262] = anon_sym_BANG;
	v->a[84263] = anon_sym_DASH;
	v->a[84264] = anon_sym_STAR;
	v->a[84265] = anon_sym_QMARK;
	v->a[84266] = anon_sym_DOLLAR;
	v->a[84267] = anon_sym_POUND;
	v->a[84268] = anon_sym_AT;
	v->a[84269] = anon_sym_0;
	v->a[84270] = anon_sym__;
	v->a[84271] = 6;
	v->a[84272] = actions(3);
	v->a[84273] = 1;
	v->a[84274] = sym_comment;
	v->a[84275] = actions(3191);
	v->a[84276] = 1;
	v->a[84277] = sym_string_content;
	v->a[84278] = actions(3195);
	v->a[84279] = 1;
	small_parse_table_4214(v);
}

void	small_parse_table_4214(t_small_parse_table_array *v)
{
	v->a[84280] = sym_variable_name;
	v->a[84281] = actions(3300);
	v->a[84282] = 1;
	v->a[84283] = anon_sym_DQUOTE;
	v->a[84284] = actions(3193);
	v->a[84285] = 2;
	v->a[84286] = aux_sym__simple_variable_name_token1;
	v->a[84287] = aux_sym__multiline_variable_name_token1;
	v->a[84288] = actions(3187);
	v->a[84289] = 9;
	v->a[84290] = anon_sym_BANG;
	v->a[84291] = anon_sym_DASH;
	v->a[84292] = anon_sym_STAR;
	v->a[84293] = anon_sym_QMARK;
	v->a[84294] = anon_sym_DOLLAR;
	v->a[84295] = anon_sym_POUND;
	v->a[84296] = anon_sym_AT;
	v->a[84297] = anon_sym_0;
	v->a[84298] = anon_sym__;
	v->a[84299] = 3;
	small_parse_table_4215(v);
}

/* EOF small_parse_table_842.c */
