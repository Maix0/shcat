/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2582.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12910(t_small_parse_table_array *v)
{
	v->a[258200] = 1;
	v->a[258201] = aux_sym_concatenation_token1;
	v->a[258202] = actions(11653);
	v->a[258203] = 1;
	v->a[258204] = sym__concat;
	v->a[258205] = state(4669);
	v->a[258206] = 1;
	v->a[258207] = aux_sym_concatenation_repeat1;
	v->a[258208] = actions(4554);
	v->a[258209] = 2;
	v->a[258210] = sym_file_descriptor;
	v->a[258211] = aux_sym_heredoc_redirect_token1;
	v->a[258212] = actions(4552);
	v->a[258213] = 20;
	v->a[258214] = anon_sym_SEMI;
	v->a[258215] = anon_sym_PIPE_PIPE;
	v->a[258216] = anon_sym_AMP_AMP;
	v->a[258217] = anon_sym_PIPE;
	v->a[258218] = anon_sym_AMP;
	v->a[258219] = anon_sym_LT;
	small_parse_table_12911(v);
}

void	small_parse_table_12911(t_small_parse_table_array *v)
{
	v->a[258220] = anon_sym_GT;
	v->a[258221] = anon_sym_LT_LT;
	v->a[258222] = anon_sym_GT_GT;
	v->a[258223] = anon_sym_SEMI_SEMI;
	v->a[258224] = anon_sym_PIPE_AMP;
	v->a[258225] = anon_sym_AMP_GT;
	v->a[258226] = anon_sym_AMP_GT_GT;
	v->a[258227] = anon_sym_LT_AMP;
	v->a[258228] = anon_sym_GT_AMP;
	v->a[258229] = anon_sym_GT_PIPE;
	v->a[258230] = anon_sym_LT_AMP_DASH;
	v->a[258231] = anon_sym_GT_AMP_DASH;
	v->a[258232] = anon_sym_LT_LT_DASH;
	v->a[258233] = anon_sym_BQUOTE;
	v->a[258234] = 8;
	v->a[258235] = actions(3);
	v->a[258236] = 1;
	v->a[258237] = sym_comment;
	v->a[258238] = actions(11414);
	v->a[258239] = 1;
	small_parse_table_12912(v);
}

void	small_parse_table_12912(t_small_parse_table_array *v)
{
	v->a[258240] = aux_sym_heredoc_redirect_token1;
	v->a[258241] = actions(11508);
	v->a[258242] = 1;
	v->a[258243] = anon_sym_LT_LT_LT;
	v->a[258244] = actions(11850);
	v->a[258245] = 1;
	v->a[258246] = sym_file_descriptor;
	v->a[258247] = actions(11542);
	v->a[258248] = 2;
	v->a[258249] = anon_sym_LT_AMP_DASH;
	v->a[258250] = anon_sym_GT_AMP_DASH;
	v->a[258251] = state(4868);
	v->a[258252] = 2;
	v->a[258253] = sym_file_redirect;
	v->a[258254] = sym_herestring_redirect;
	v->a[258255] = actions(11540);
	v->a[258256] = 8;
	v->a[258257] = anon_sym_LT;
	v->a[258258] = anon_sym_GT;
	v->a[258259] = anon_sym_GT_GT;
	small_parse_table_12913(v);
}

void	small_parse_table_12913(t_small_parse_table_array *v)
{
	v->a[258260] = anon_sym_AMP_GT;
	v->a[258261] = anon_sym_AMP_GT_GT;
	v->a[258262] = anon_sym_LT_AMP;
	v->a[258263] = anon_sym_GT_AMP;
	v->a[258264] = anon_sym_GT_PIPE;
	v->a[258265] = actions(11412);
	v->a[258266] = 10;
	v->a[258267] = anon_sym_SEMI;
	v->a[258268] = anon_sym_PIPE_PIPE;
	v->a[258269] = anon_sym_AMP_AMP;
	v->a[258270] = anon_sym_PIPE;
	v->a[258271] = anon_sym_AMP;
	v->a[258272] = anon_sym_LT_LT;
	v->a[258273] = anon_sym_RPAREN;
	v->a[258274] = anon_sym_SEMI_SEMI;
	v->a[258275] = anon_sym_PIPE_AMP;
	v->a[258276] = anon_sym_LT_LT_DASH;
	v->a[258277] = 16;
	v->a[258278] = actions(3);
	v->a[258279] = 1;
	small_parse_table_12914(v);
}

void	small_parse_table_12914(t_small_parse_table_array *v)
{
	v->a[258280] = sym_comment;
	v->a[258281] = actions(11760);
	v->a[258282] = 1;
	v->a[258283] = anon_sym_BANG2;
	v->a[258284] = actions(11764);
	v->a[258285] = 1;
	v->a[258286] = anon_sym_DOLLAR_LPAREN;
	v->a[258287] = actions(11766);
	v->a[258288] = 1;
	v->a[258289] = anon_sym_BQUOTE;
	v->a[258290] = actions(11768);
	v->a[258291] = 1;
	v->a[258292] = anon_sym_DOLLAR_BQUOTE;
	v->a[258293] = actions(11770);
	v->a[258294] = 1;
	v->a[258295] = aux_sym__simple_variable_name_token1;
	v->a[258296] = actions(11772);
	v->a[258297] = 1;
	v->a[258298] = sym_variable_name;
	v->a[258299] = actions(11899);
	small_parse_table_12915(v);
}

/* EOF small_parse_table_2582.c */
