/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_748.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3740(t_small_parse_table_array *v)
{
	v->a[74800] = actions(863);
	v->a[74801] = 1;
	v->a[74802] = anon_sym_DQUOTE;
	v->a[74803] = actions(865);
	v->a[74804] = 1;
	v->a[74805] = anon_sym_DOLLAR_LBRACE;
	v->a[74806] = actions(867);
	v->a[74807] = 1;
	v->a[74808] = anon_sym_DOLLAR_LPAREN;
	v->a[74809] = actions(869);
	v->a[74810] = 1;
	v->a[74811] = anon_sym_BQUOTE;
	v->a[74812] = state(2119);
	v->a[74813] = 1;
	v->a[74814] = sym_terminator;
	v->a[74815] = state(1402);
	v->a[74816] = 2;
	v->a[74817] = sym_concatenation;
	v->a[74818] = aux_sym_for_statement_repeat1;
	v->a[74819] = actions(2479);
	small_parse_table_3741(v);
}

void	small_parse_table_3741(t_small_parse_table_array *v)
{
	v->a[74820] = 3;
	v->a[74821] = sym_raw_string;
	v->a[74822] = sym_number;
	v->a[74823] = sym_word;
	v->a[74824] = actions(2481);
	v->a[74825] = 4;
	v->a[74826] = anon_sym_SEMI_SEMI;
	v->a[74827] = aux_sym_heredoc_redirect_token1;
	v->a[74828] = anon_sym_AMP;
	v->a[74829] = anon_sym_SEMI;
	v->a[74830] = state(1669);
	v->a[74831] = 5;
	v->a[74832] = sym_arithmetic_expansion;
	v->a[74833] = sym_string;
	v->a[74834] = sym_simple_expansion;
	v->a[74835] = sym_expansion;
	v->a[74836] = sym_command_substitution;
	v->a[74837] = 3;
	v->a[74838] = actions(3);
	v->a[74839] = 1;
	small_parse_table_3742(v);
}

void	small_parse_table_3742(t_small_parse_table_array *v)
{
	v->a[74840] = sym_comment;
	v->a[74841] = actions(2354);
	v->a[74842] = 2;
	v->a[74843] = sym_file_descriptor;
	v->a[74844] = aux_sym_heredoc_redirect_token1;
	v->a[74845] = actions(2356);
	v->a[74846] = 19;
	v->a[74847] = anon_sym_esac;
	v->a[74848] = anon_sym_PIPE;
	v->a[74849] = anon_sym_SEMI_SEMI;
	v->a[74850] = anon_sym_AMP_AMP;
	v->a[74851] = anon_sym_PIPE_PIPE;
	v->a[74852] = anon_sym_LT;
	v->a[74853] = anon_sym_GT;
	v->a[74854] = anon_sym_GT_GT;
	v->a[74855] = anon_sym_AMP_GT;
	v->a[74856] = anon_sym_AMP_GT_GT;
	v->a[74857] = anon_sym_LT_AMP;
	v->a[74858] = anon_sym_GT_AMP;
	v->a[74859] = anon_sym_GT_PIPE;
	small_parse_table_3743(v);
}

void	small_parse_table_3743(t_small_parse_table_array *v)
{
	v->a[74860] = anon_sym_LT_AMP_DASH;
	v->a[74861] = anon_sym_GT_AMP_DASH;
	v->a[74862] = anon_sym_LT_LT;
	v->a[74863] = anon_sym_LT_LT_DASH;
	v->a[74864] = anon_sym_AMP;
	v->a[74865] = anon_sym_SEMI;
	v->a[74866] = 15;
	v->a[74867] = actions(3);
	v->a[74868] = 1;
	v->a[74869] = sym_comment;
	v->a[74870] = actions(1879);
	v->a[74871] = 1;
	v->a[74872] = anon_sym_LPAREN;
	v->a[74873] = actions(1883);
	v->a[74874] = 1;
	v->a[74875] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74876] = actions(1885);
	v->a[74877] = 1;
	v->a[74878] = anon_sym_DOLLAR;
	v->a[74879] = actions(1887);
	small_parse_table_3744(v);
}

void	small_parse_table_3744(t_small_parse_table_array *v)
{
	v->a[74880] = 1;
	v->a[74881] = anon_sym_DQUOTE;
	v->a[74882] = actions(1889);
	v->a[74883] = 1;
	v->a[74884] = anon_sym_DOLLAR_LBRACE;
	v->a[74885] = actions(1891);
	v->a[74886] = 1;
	v->a[74887] = anon_sym_DOLLAR_LPAREN;
	v->a[74888] = actions(1893);
	v->a[74889] = 1;
	v->a[74890] = anon_sym_BQUOTE;
	v->a[74891] = actions(1895);
	v->a[74892] = 1;
	v->a[74893] = sym_extglob_pattern;
	v->a[74894] = state(1396);
	v->a[74895] = 1;
	v->a[74896] = aux_sym_case_statement_repeat1;
	v->a[74897] = state(1923);
	v->a[74898] = 1;
	v->a[74899] = sym_case_item;
	small_parse_table_3745(v);
}

/* EOF small_parse_table_748.c */
