/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1265.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6325(t_small_parse_table_array *v)
{
	v->a[126500] = 5;
	v->a[126501] = actions(71);
	v->a[126502] = 1;
	v->a[126503] = sym_comment;
	v->a[126504] = state(2459);
	v->a[126505] = 1;
	v->a[126506] = aux_sym_concatenation_repeat1;
	v->a[126507] = actions(1143);
	v->a[126508] = 2;
	v->a[126509] = sym__concat;
	v->a[126510] = aux_sym_concatenation_token1;
	v->a[126511] = actions(1261);
	v->a[126512] = 14;
	v->a[126513] = anon_sym_EQ;
	v->a[126514] = anon_sym_PIPE;
	v->a[126515] = anon_sym_CARET;
	v->a[126516] = anon_sym_AMP;
	v->a[126517] = anon_sym_LT;
	v->a[126518] = anon_sym_GT;
	v->a[126519] = anon_sym_LT_LT;
	small_parse_table_6326(v);
}

void	small_parse_table_6326(t_small_parse_table_array *v)
{
	v->a[126520] = anon_sym_GT_GT;
	v->a[126521] = anon_sym_PLUS;
	v->a[126522] = anon_sym_DASH;
	v->a[126523] = anon_sym_STAR;
	v->a[126524] = anon_sym_SLASH;
	v->a[126525] = anon_sym_PERCENT;
	v->a[126526] = anon_sym_STAR_STAR;
	v->a[126527] = actions(1263);
	v->a[126528] = 24;
	v->a[126529] = sym_test_operator;
	v->a[126530] = anon_sym_PLUS_PLUS;
	v->a[126531] = anon_sym_DASH_DASH;
	v->a[126532] = anon_sym_PLUS_EQ;
	v->a[126533] = anon_sym_DASH_EQ;
	v->a[126534] = anon_sym_STAR_EQ;
	v->a[126535] = anon_sym_SLASH_EQ;
	v->a[126536] = anon_sym_PERCENT_EQ;
	v->a[126537] = anon_sym_STAR_STAR_EQ;
	v->a[126538] = anon_sym_LT_LT_EQ;
	v->a[126539] = anon_sym_GT_GT_EQ;
	small_parse_table_6327(v);
}

void	small_parse_table_6327(t_small_parse_table_array *v)
{
	v->a[126540] = anon_sym_AMP_EQ;
	v->a[126541] = anon_sym_CARET_EQ;
	v->a[126542] = anon_sym_PIPE_EQ;
	v->a[126543] = anon_sym_PIPE_PIPE;
	v->a[126544] = anon_sym_AMP_AMP;
	v->a[126545] = anon_sym_EQ_EQ;
	v->a[126546] = anon_sym_BANG_EQ;
	v->a[126547] = anon_sym_LT_EQ;
	v->a[126548] = anon_sym_GT_EQ;
	v->a[126549] = anon_sym_EQ_TILDE;
	v->a[126550] = anon_sym_QMARK;
	v->a[126551] = anon_sym_COLON;
	v->a[126552] = sym__special_character;
	v->a[126553] = 26;
	v->a[126554] = actions(3);
	v->a[126555] = 1;
	v->a[126556] = sym_comment;
	v->a[126557] = actions(6480);
	v->a[126558] = 1;
	v->a[126559] = anon_sym_LPAREN;
	small_parse_table_6328(v);
}

void	small_parse_table_6328(t_small_parse_table_array *v)
{
	v->a[126560] = actions(6486);
	v->a[126561] = 1;
	v->a[126562] = anon_sym_DOLLAR_LBRACK;
	v->a[126563] = actions(6488);
	v->a[126564] = 1;
	v->a[126565] = anon_sym_DOLLAR;
	v->a[126566] = actions(6490);
	v->a[126567] = 1;
	v->a[126568] = sym__special_character;
	v->a[126569] = actions(6492);
	v->a[126570] = 1;
	v->a[126571] = anon_sym_DQUOTE;
	v->a[126572] = actions(6494);
	v->a[126573] = 1;
	v->a[126574] = aux_sym_number_token1;
	v->a[126575] = actions(6496);
	v->a[126576] = 1;
	v->a[126577] = aux_sym_number_token2;
	v->a[126578] = actions(6498);
	v->a[126579] = 1;
	small_parse_table_6329(v);
}

void	small_parse_table_6329(t_small_parse_table_array *v)
{
	v->a[126580] = anon_sym_DOLLAR_LBRACE;
	v->a[126581] = actions(6500);
	v->a[126582] = 1;
	v->a[126583] = anon_sym_DOLLAR_LPAREN;
	v->a[126584] = actions(6502);
	v->a[126585] = 1;
	v->a[126586] = anon_sym_BQUOTE;
	v->a[126587] = actions(6504);
	v->a[126588] = 1;
	v->a[126589] = anon_sym_DOLLAR_BQUOTE;
	v->a[126590] = actions(6508);
	v->a[126591] = 1;
	v->a[126592] = sym_test_operator;
	v->a[126593] = actions(6510);
	v->a[126594] = 1;
	v->a[126595] = sym_extglob_pattern;
	v->a[126596] = actions(6512);
	v->a[126597] = 1;
	v->a[126598] = sym__brace_start;
	v->a[126599] = actions(6610);
	small_parse_table_6330(v);
}

/* EOF small_parse_table_1265.c */
