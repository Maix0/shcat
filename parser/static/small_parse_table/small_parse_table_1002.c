/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1002.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5010(t_small_parse_table_array *v)
{
	v->a[100200] = anon_sym_PIPE;
	v->a[100201] = anon_sym_SEMI_SEMI;
	v->a[100202] = anon_sym_SEMI_AMP;
	v->a[100203] = anon_sym_SEMI_SEMI_AMP;
	v->a[100204] = anon_sym_PIPE_AMP;
	v->a[100205] = anon_sym_AMP_AMP;
	v->a[100206] = anon_sym_PIPE_PIPE;
	v->a[100207] = anon_sym_LT;
	v->a[100208] = anon_sym_GT;
	v->a[100209] = anon_sym_GT_GT;
	v->a[100210] = anon_sym_AMP_GT;
	v->a[100211] = anon_sym_AMP_GT_GT;
	v->a[100212] = anon_sym_LT_AMP;
	v->a[100213] = anon_sym_GT_AMP;
	v->a[100214] = anon_sym_GT_PIPE;
	v->a[100215] = anon_sym_LT_AMP_DASH;
	v->a[100216] = anon_sym_GT_AMP_DASH;
	v->a[100217] = anon_sym_LT_LT;
	v->a[100218] = anon_sym_LT_LT_DASH;
	v->a[100219] = anon_sym_AMP;
	small_parse_table_5011(v);
}

void	small_parse_table_5011(t_small_parse_table_array *v)
{
	v->a[100220] = aux_sym_concatenation_token1;
	v->a[100221] = anon_sym_SEMI;
	v->a[100222] = 3;
	v->a[100223] = actions(3);
	v->a[100224] = 1;
	v->a[100225] = sym_comment;
	v->a[100226] = actions(3062);
	v->a[100227] = 3;
	v->a[100228] = sym_file_descriptor;
	v->a[100229] = sym__concat;
	v->a[100230] = aux_sym_heredoc_redirect_token1;
	v->a[100231] = actions(3060);
	v->a[100232] = 22;
	v->a[100233] = anon_sym_PIPE;
	v->a[100234] = anon_sym_SEMI_SEMI;
	v->a[100235] = anon_sym_SEMI_AMP;
	v->a[100236] = anon_sym_SEMI_SEMI_AMP;
	v->a[100237] = anon_sym_PIPE_AMP;
	v->a[100238] = anon_sym_AMP_AMP;
	v->a[100239] = anon_sym_PIPE_PIPE;
	small_parse_table_5012(v);
}

void	small_parse_table_5012(t_small_parse_table_array *v)
{
	v->a[100240] = anon_sym_LT;
	v->a[100241] = anon_sym_GT;
	v->a[100242] = anon_sym_GT_GT;
	v->a[100243] = anon_sym_AMP_GT;
	v->a[100244] = anon_sym_AMP_GT_GT;
	v->a[100245] = anon_sym_LT_AMP;
	v->a[100246] = anon_sym_GT_AMP;
	v->a[100247] = anon_sym_GT_PIPE;
	v->a[100248] = anon_sym_LT_AMP_DASH;
	v->a[100249] = anon_sym_GT_AMP_DASH;
	v->a[100250] = anon_sym_LT_LT;
	v->a[100251] = anon_sym_LT_LT_DASH;
	v->a[100252] = anon_sym_AMP;
	v->a[100253] = aux_sym_concatenation_token1;
	v->a[100254] = anon_sym_SEMI;
	v->a[100255] = 3;
	v->a[100256] = actions(3);
	v->a[100257] = 1;
	v->a[100258] = sym_comment;
	v->a[100259] = actions(2664);
	small_parse_table_5013(v);
}

void	small_parse_table_5013(t_small_parse_table_array *v)
{
	v->a[100260] = 2;
	v->a[100261] = sym_file_descriptor;
	v->a[100262] = aux_sym_heredoc_redirect_token1;
	v->a[100263] = actions(2662);
	v->a[100264] = 23;
	v->a[100265] = anon_sym_esac;
	v->a[100266] = anon_sym_PIPE;
	v->a[100267] = anon_sym_SEMI_SEMI;
	v->a[100268] = anon_sym_SEMI_AMP;
	v->a[100269] = anon_sym_SEMI_SEMI_AMP;
	v->a[100270] = anon_sym_PIPE_AMP;
	v->a[100271] = anon_sym_AMP_AMP;
	v->a[100272] = anon_sym_PIPE_PIPE;
	v->a[100273] = anon_sym_LT;
	v->a[100274] = anon_sym_GT;
	v->a[100275] = anon_sym_GT_GT;
	v->a[100276] = anon_sym_AMP_GT;
	v->a[100277] = anon_sym_AMP_GT_GT;
	v->a[100278] = anon_sym_LT_AMP;
	v->a[100279] = anon_sym_GT_AMP;
	small_parse_table_5014(v);
}

void	small_parse_table_5014(t_small_parse_table_array *v)
{
	v->a[100280] = anon_sym_GT_PIPE;
	v->a[100281] = anon_sym_LT_AMP_DASH;
	v->a[100282] = anon_sym_GT_AMP_DASH;
	v->a[100283] = anon_sym_LT_LT;
	v->a[100284] = anon_sym_LT_LT_DASH;
	v->a[100285] = anon_sym_AMP;
	v->a[100286] = sym__special_character;
	v->a[100287] = anon_sym_SEMI;
	v->a[100288] = 11;
	v->a[100289] = actions(3);
	v->a[100290] = 1;
	v->a[100291] = sym_comment;
	v->a[100292] = actions(1995);
	v->a[100293] = 1;
	v->a[100294] = anon_sym_RPAREN;
	v->a[100295] = actions(2710);
	v->a[100296] = 1;
	v->a[100297] = aux_sym_heredoc_redirect_token1;
	v->a[100298] = actions(5680);
	v->a[100299] = 1;
	small_parse_table_5015(v);
}

/* EOF small_parse_table_1002.c */
