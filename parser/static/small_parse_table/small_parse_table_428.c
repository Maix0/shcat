/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_428.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2140(t_small_parse_table_array *v)
{
	v->a[42800] = sym_number;
	v->a[42801] = sym_word;
	v->a[42802] = state(362);
	v->a[42803] = 5;
	v->a[42804] = sym_arithmetic_expansion;
	v->a[42805] = sym_string;
	v->a[42806] = sym_simple_expansion;
	v->a[42807] = sym_expansion;
	v->a[42808] = sym_command_substitution;
	v->a[42809] = actions(1150);
	v->a[42810] = 7;
	v->a[42811] = anon_sym_LT;
	v->a[42812] = anon_sym_GT;
	v->a[42813] = anon_sym_GT_GT;
	v->a[42814] = anon_sym_LT_AMP;
	v->a[42815] = anon_sym_GT_AMP;
	v->a[42816] = anon_sym_GT_PIPE;
	v->a[42817] = anon_sym_LT_GT;
	v->a[42818] = 6;
	v->a[42819] = actions(3);
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = 1;
	v->a[42821] = sym_comment;
	v->a[42822] = actions(1045);
	v->a[42823] = 1;
	v->a[42824] = aux_sym_concatenation_token1;
	v->a[42825] = actions(1513);
	v->a[42826] = 1;
	v->a[42827] = sym__concat;
	v->a[42828] = state(348);
	v->a[42829] = 1;
	v->a[42830] = aux_sym_concatenation_repeat1;
	v->a[42831] = actions(1047);
	v->a[42832] = 2;
	v->a[42833] = sym_file_descriptor;
	v->a[42834] = sym__bare_dollar;
	v->a[42835] = actions(1043);
	v->a[42836] = 23;
	v->a[42837] = anon_sym_LPAREN;
	v->a[42838] = anon_sym_PIPE;
	v->a[42839] = anon_sym_AMP_AMP;
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = anon_sym_PIPE_PIPE;
	v->a[42841] = anon_sym_LT;
	v->a[42842] = anon_sym_GT;
	v->a[42843] = anon_sym_GT_GT;
	v->a[42844] = anon_sym_LT_AMP;
	v->a[42845] = anon_sym_GT_AMP;
	v->a[42846] = anon_sym_GT_PIPE;
	v->a[42847] = anon_sym_LT_GT;
	v->a[42848] = anon_sym_LT_LT;
	v->a[42849] = anon_sym_LT_LT_DASH;
	v->a[42850] = aux_sym_heredoc_redirect_token1;
	v->a[42851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42852] = anon_sym_DOLLAR;
	v->a[42853] = anon_sym_DQUOTE;
	v->a[42854] = sym_raw_string;
	v->a[42855] = sym_number;
	v->a[42856] = anon_sym_DOLLAR_LBRACE;
	v->a[42857] = anon_sym_DOLLAR_LPAREN;
	v->a[42858] = anon_sym_BQUOTE;
	v->a[42859] = sym_word;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = 7;
	v->a[42861] = actions(3);
	v->a[42862] = 1;
	v->a[42863] = sym_comment;
	v->a[42864] = actions(1432);
	v->a[42865] = 1;
	v->a[42866] = sym_file_descriptor;
	v->a[42867] = actions(1435);
	v->a[42868] = 1;
	v->a[42869] = sym_variable_name;
	v->a[42870] = actions(1515);
	v->a[42871] = 1;
	v->a[42872] = anon_sym_RPAREN;
	v->a[42873] = actions(1429);
	v->a[42874] = 7;
	v->a[42875] = anon_sym_LT;
	v->a[42876] = anon_sym_GT;
	v->a[42877] = anon_sym_GT_GT;
	v->a[42878] = anon_sym_LT_AMP;
	v->a[42879] = anon_sym_GT_AMP;
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = anon_sym_GT_PIPE;
	v->a[42881] = anon_sym_LT_GT;
	v->a[42882] = actions(1422);
	v->a[42883] = 9;
	v->a[42884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42885] = anon_sym_DOLLAR;
	v->a[42886] = anon_sym_DQUOTE;
	v->a[42887] = sym_raw_string;
	v->a[42888] = sym_number;
	v->a[42889] = anon_sym_DOLLAR_LBRACE;
	v->a[42890] = anon_sym_DOLLAR_LPAREN;
	v->a[42891] = anon_sym_BQUOTE;
	v->a[42892] = sym_word;
	v->a[42893] = actions(1424);
	v->a[42894] = 9;
	v->a[42895] = anon_sym_PIPE;
	v->a[42896] = anon_sym_SEMI_SEMI;
	v->a[42897] = anon_sym_AMP_AMP;
	v->a[42898] = anon_sym_PIPE_PIPE;
	v->a[42899] = anon_sym_LT_LT;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */
