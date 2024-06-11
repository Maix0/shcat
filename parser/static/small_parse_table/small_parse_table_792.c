/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_792.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3960(t_small_parse_table_array *v)
{
	v->a[79200] = actions(3);
	v->a[79201] = 1;
	v->a[79202] = sym_comment;
	v->a[79203] = actions(2710);
	v->a[79204] = 2;
	v->a[79205] = sym_file_descriptor;
	v->a[79206] = aux_sym_heredoc_redirect_token1;
	v->a[79207] = actions(2712);
	v->a[79208] = 19;
	v->a[79209] = anon_sym_esac;
	v->a[79210] = anon_sym_PIPE;
	v->a[79211] = anon_sym_SEMI_SEMI;
	v->a[79212] = anon_sym_AMP_AMP;
	v->a[79213] = anon_sym_PIPE_PIPE;
	v->a[79214] = anon_sym_LT;
	v->a[79215] = anon_sym_GT;
	v->a[79216] = anon_sym_GT_GT;
	v->a[79217] = anon_sym_AMP_GT;
	v->a[79218] = anon_sym_AMP_GT_GT;
	v->a[79219] = anon_sym_LT_AMP;
	small_parse_table_3961(v);
}

void	small_parse_table_3961(t_small_parse_table_array *v)
{
	v->a[79220] = anon_sym_GT_AMP;
	v->a[79221] = anon_sym_GT_PIPE;
	v->a[79222] = anon_sym_LT_AMP_DASH;
	v->a[79223] = anon_sym_GT_AMP_DASH;
	v->a[79224] = anon_sym_LT_LT;
	v->a[79225] = anon_sym_LT_LT_DASH;
	v->a[79226] = anon_sym_AMP;
	v->a[79227] = anon_sym_SEMI;
	v->a[79228] = 3;
	v->a[79229] = actions(3);
	v->a[79230] = 1;
	v->a[79231] = sym_comment;
	v->a[79232] = actions(1568);
	v->a[79233] = 2;
	v->a[79234] = sym_file_descriptor;
	v->a[79235] = sym_variable_name;
	v->a[79236] = actions(1558);
	v->a[79237] = 19;
	v->a[79238] = anon_sym_LT;
	v->a[79239] = anon_sym_GT;
	small_parse_table_3962(v);
}

void	small_parse_table_3962(t_small_parse_table_array *v)
{
	v->a[79240] = anon_sym_GT_GT;
	v->a[79241] = anon_sym_AMP_GT;
	v->a[79242] = anon_sym_AMP_GT_GT;
	v->a[79243] = anon_sym_LT_AMP;
	v->a[79244] = anon_sym_GT_AMP;
	v->a[79245] = anon_sym_GT_PIPE;
	v->a[79246] = anon_sym_LT_AMP_DASH;
	v->a[79247] = anon_sym_GT_AMP_DASH;
	v->a[79248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79249] = anon_sym_DOLLAR;
	v->a[79250] = anon_sym_DQUOTE;
	v->a[79251] = sym_raw_string;
	v->a[79252] = sym_number;
	v->a[79253] = anon_sym_DOLLAR_LBRACE;
	v->a[79254] = anon_sym_DOLLAR_LPAREN;
	v->a[79255] = anon_sym_BQUOTE;
	v->a[79256] = sym_word;
	v->a[79257] = 15;
	v->a[79258] = actions(3);
	v->a[79259] = 1;
	small_parse_table_3963(v);
}

void	small_parse_table_3963(t_small_parse_table_array *v)
{
	v->a[79260] = sym_comment;
	v->a[79261] = actions(1959);
	v->a[79262] = 1;
	v->a[79263] = anon_sym_LPAREN;
	v->a[79264] = actions(1963);
	v->a[79265] = 1;
	v->a[79266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79267] = actions(1965);
	v->a[79268] = 1;
	v->a[79269] = anon_sym_DOLLAR;
	v->a[79270] = actions(1967);
	v->a[79271] = 1;
	v->a[79272] = anon_sym_DQUOTE;
	v->a[79273] = actions(1969);
	v->a[79274] = 1;
	v->a[79275] = anon_sym_DOLLAR_LBRACE;
	v->a[79276] = actions(1971);
	v->a[79277] = 1;
	v->a[79278] = anon_sym_DOLLAR_LPAREN;
	v->a[79279] = actions(1973);
	small_parse_table_3964(v);
}

void	small_parse_table_3964(t_small_parse_table_array *v)
{
	v->a[79280] = 1;
	v->a[79281] = anon_sym_BQUOTE;
	v->a[79282] = actions(1975);
	v->a[79283] = 1;
	v->a[79284] = sym_extglob_pattern;
	v->a[79285] = state(1547);
	v->a[79286] = 1;
	v->a[79287] = aux_sym_case_statement_repeat1;
	v->a[79288] = state(2080);
	v->a[79289] = 1;
	v->a[79290] = sym_case_item;
	v->a[79291] = state(2478);
	v->a[79292] = 1;
	v->a[79293] = sym__case_item_last;
	v->a[79294] = state(2224);
	v->a[79295] = 2;
	v->a[79296] = sym_concatenation;
	v->a[79297] = sym__extglob_blob;
	v->a[79298] = actions(1955);
	v->a[79299] = 3;
	small_parse_table_3965(v);
}

/* EOF small_parse_table_792.c */
