/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_34.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_170(t_small_parse_table_array *v)
{
	v->a[3400] = sym__special_character;
	v->a[3401] = anon_sym_DQUOTE;
	v->a[3402] = sym_raw_string;
	v->a[3403] = aux_sym_number_token1;
	v->a[3404] = aux_sym_number_token2;
	v->a[3405] = anon_sym_DOLLAR_LBRACE;
	v->a[3406] = anon_sym_DOLLAR_LPAREN;
	v->a[3407] = anon_sym_BQUOTE;
	v->a[3408] = anon_sym_DOLLAR_BQUOTE;
	v->a[3409] = sym_word;
	v->a[3410] = anon_sym_SEMI;
	v->a[3411] = 6;
	v->a[3412] = actions(3);
	v->a[3413] = 1;
	v->a[3414] = sym_comment;
	v->a[3415] = actions(1335);
	v->a[3416] = 1;
	v->a[3417] = sym_variable_name;
	v->a[3418] = actions(1333);
	v->a[3419] = 2;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = aux_sym__simple_variable_name_token1;
	v->a[3421] = aux_sym__multiline_variable_name_token1;
	v->a[3422] = actions(816);
	v->a[3423] = 3;
	v->a[3424] = sym_file_descriptor;
	v->a[3425] = sym_test_operator;
	v->a[3426] = sym__brace_start;
	v->a[3427] = actions(1331);
	v->a[3428] = 9;
	v->a[3429] = anon_sym_BANG;
	v->a[3430] = anon_sym_DASH;
	v->a[3431] = anon_sym_STAR;
	v->a[3432] = anon_sym_QMARK;
	v->a[3433] = anon_sym_DOLLAR;
	v->a[3434] = anon_sym_POUND;
	v->a[3435] = anon_sym_AT;
	v->a[3436] = anon_sym_0;
	v->a[3437] = anon_sym__;
	v->a[3438] = actions(810);
	v->a[3439] = 34;
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = anon_sym_esac;
	v->a[3441] = anon_sym_PIPE;
	v->a[3442] = anon_sym_SEMI_SEMI;
	v->a[3443] = anon_sym_SEMI_AMP;
	v->a[3444] = anon_sym_SEMI_SEMI_AMP;
	v->a[3445] = anon_sym_PIPE_AMP;
	v->a[3446] = anon_sym_AMP_AMP;
	v->a[3447] = anon_sym_PIPE_PIPE;
	v->a[3448] = anon_sym_LT;
	v->a[3449] = anon_sym_GT;
	v->a[3450] = anon_sym_GT_GT;
	v->a[3451] = anon_sym_AMP_GT;
	v->a[3452] = anon_sym_AMP_GT_GT;
	v->a[3453] = anon_sym_LT_AMP;
	v->a[3454] = anon_sym_GT_AMP;
	v->a[3455] = anon_sym_GT_PIPE;
	v->a[3456] = anon_sym_LT_AMP_DASH;
	v->a[3457] = anon_sym_GT_AMP_DASH;
	v->a[3458] = anon_sym_LT_LT;
	v->a[3459] = anon_sym_LT_LT_DASH;
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = aux_sym_heredoc_redirect_token1;
	v->a[3461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3462] = anon_sym_AMP;
	v->a[3463] = sym__special_character;
	v->a[3464] = anon_sym_DQUOTE;
	v->a[3465] = sym_raw_string;
	v->a[3466] = aux_sym_number_token1;
	v->a[3467] = aux_sym_number_token2;
	v->a[3468] = anon_sym_DOLLAR_LBRACE;
	v->a[3469] = anon_sym_DOLLAR_LPAREN;
	v->a[3470] = anon_sym_BQUOTE;
	v->a[3471] = anon_sym_DOLLAR_BQUOTE;
	v->a[3472] = sym_word;
	v->a[3473] = anon_sym_SEMI;
	v->a[3474] = 6;
	v->a[3475] = actions(3);
	v->a[3476] = 1;
	v->a[3477] = sym_comment;
	v->a[3478] = actions(1329);
	v->a[3479] = 1;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = sym_variable_name;
	v->a[3481] = actions(1327);
	v->a[3482] = 2;
	v->a[3483] = aux_sym__simple_variable_name_token1;
	v->a[3484] = aux_sym__multiline_variable_name_token1;
	v->a[3485] = actions(816);
	v->a[3486] = 3;
	v->a[3487] = sym_file_descriptor;
	v->a[3488] = sym_test_operator;
	v->a[3489] = sym__brace_start;
	v->a[3490] = actions(1325);
	v->a[3491] = 9;
	v->a[3492] = anon_sym_BANG;
	v->a[3493] = anon_sym_DASH;
	v->a[3494] = anon_sym_STAR;
	v->a[3495] = anon_sym_QMARK;
	v->a[3496] = anon_sym_DOLLAR;
	v->a[3497] = anon_sym_POUND;
	v->a[3498] = anon_sym_AT;
	v->a[3499] = anon_sym_0;
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
