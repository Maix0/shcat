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
	v->a[79200] = anon_sym_DOLLAR;
	v->a[79201] = anon_sym_DQUOTE;
	v->a[79202] = sym_raw_string;
	v->a[79203] = sym_number;
	v->a[79204] = anon_sym_DOLLAR_LBRACE;
	v->a[79205] = anon_sym_DOLLAR_LPAREN;
	v->a[79206] = anon_sym_BQUOTE;
	v->a[79207] = sym_word;
	v->a[79208] = 8;
	v->a[79209] = actions(664);
	v->a[79210] = 1;
	v->a[79211] = sym_comment;
	v->a[79212] = actions(3395);
	v->a[79213] = 1;
	v->a[79214] = anon_sym_DOLLAR;
	v->a[79215] = actions(3398);
	v->a[79216] = 1;
	v->a[79217] = anon_sym_DOLLAR_LBRACE;
	v->a[79218] = actions(3401);
	v->a[79219] = 1;
	small_parse_table_3961(v);
}

void	small_parse_table_3961(t_small_parse_table_array *v)
{
	v->a[79220] = anon_sym_DOLLAR_LPAREN;
	v->a[79221] = actions(3404);
	v->a[79222] = 1;
	v->a[79223] = anon_sym_BQUOTE;
	v->a[79224] = actions(3407);
	v->a[79225] = 1;
	v->a[79226] = sym_heredoc_content;
	v->a[79227] = actions(3410);
	v->a[79228] = 1;
	v->a[79229] = sym_heredoc_end;
	v->a[79230] = state(1718);
	v->a[79231] = 4;
	v->a[79232] = sym_simple_expansion;
	v->a[79233] = sym_expansion;
	v->a[79234] = sym_command_substitution;
	v->a[79235] = aux_sym_heredoc_body_repeat1;
	v->a[79236] = 8;
	v->a[79237] = actions(664);
	v->a[79238] = 1;
	v->a[79239] = sym_comment;
	small_parse_table_3962(v);
}

void	small_parse_table_3962(t_small_parse_table_array *v)
{
	v->a[79240] = actions(3412);
	v->a[79241] = 1;
	v->a[79242] = anon_sym_DOLLAR;
	v->a[79243] = actions(3414);
	v->a[79244] = 1;
	v->a[79245] = anon_sym_DOLLAR_LBRACE;
	v->a[79246] = actions(3416);
	v->a[79247] = 1;
	v->a[79248] = anon_sym_DOLLAR_LPAREN;
	v->a[79249] = actions(3418);
	v->a[79250] = 1;
	v->a[79251] = anon_sym_BQUOTE;
	v->a[79252] = actions(3420);
	v->a[79253] = 1;
	v->a[79254] = sym_heredoc_content;
	v->a[79255] = actions(3422);
	v->a[79256] = 1;
	v->a[79257] = sym_heredoc_end;
	v->a[79258] = state(1718);
	v->a[79259] = 4;
	small_parse_table_3963(v);
}

void	small_parse_table_3963(t_small_parse_table_array *v)
{
	v->a[79260] = sym_simple_expansion;
	v->a[79261] = sym_expansion;
	v->a[79262] = sym_command_substitution;
	v->a[79263] = aux_sym_heredoc_body_repeat1;
	v->a[79264] = 8;
	v->a[79265] = actions(664);
	v->a[79266] = 1;
	v->a[79267] = sym_comment;
	v->a[79268] = actions(3412);
	v->a[79269] = 1;
	v->a[79270] = anon_sym_DOLLAR;
	v->a[79271] = actions(3414);
	v->a[79272] = 1;
	v->a[79273] = anon_sym_DOLLAR_LBRACE;
	v->a[79274] = actions(3416);
	v->a[79275] = 1;
	v->a[79276] = anon_sym_DOLLAR_LPAREN;
	v->a[79277] = actions(3418);
	v->a[79278] = 1;
	v->a[79279] = anon_sym_BQUOTE;
	small_parse_table_3964(v);
}

void	small_parse_table_3964(t_small_parse_table_array *v)
{
	v->a[79280] = actions(3424);
	v->a[79281] = 1;
	v->a[79282] = sym_heredoc_content;
	v->a[79283] = actions(3426);
	v->a[79284] = 1;
	v->a[79285] = sym_heredoc_end;
	v->a[79286] = state(1719);
	v->a[79287] = 4;
	v->a[79288] = sym_simple_expansion;
	v->a[79289] = sym_expansion;
	v->a[79290] = sym_command_substitution;
	v->a[79291] = aux_sym_heredoc_body_repeat1;
	v->a[79292] = 2;
	v->a[79293] = actions(3);
	v->a[79294] = 1;
	v->a[79295] = sym_comment;
	v->a[79296] = actions(3039);
	v->a[79297] = 10;
	v->a[79298] = aux_sym_heredoc_redirect_token1;
	v->a[79299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3965(v);
}

/* EOF small_parse_table_792.c */
