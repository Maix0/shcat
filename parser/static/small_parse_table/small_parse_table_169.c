/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_169.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_845(t_small_parse_table_array *v)
{
	v->a[16900] = actions(405);
	v->a[16901] = 1;
	v->a[16902] = sym__bare_dollar;
	v->a[16903] = state(174);
	v->a[16904] = 1;
	v->a[16905] = aux_sym_command_repeat2;
	v->a[16906] = state(523);
	v->a[16907] = 1;
	v->a[16908] = sym_concatenation;
	v->a[16909] = actions(401);
	v->a[16910] = 3;
	v->a[16911] = sym_raw_string;
	v->a[16912] = sym_number;
	v->a[16913] = sym_word;
	v->a[16914] = state(261);
	v->a[16915] = 5;
	v->a[16916] = sym_arithmetic_expansion;
	v->a[16917] = sym_string;
	v->a[16918] = sym_simple_expansion;
	v->a[16919] = sym_expansion;
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = sym_command_substitution;
	v->a[16921] = actions(411);
	v->a[16922] = 11;
	v->a[16923] = anon_sym_esac;
	v->a[16924] = anon_sym_PIPE;
	v->a[16925] = anon_sym_SEMI_SEMI;
	v->a[16926] = anon_sym_AMP_AMP;
	v->a[16927] = anon_sym_PIPE_PIPE;
	v->a[16928] = anon_sym_LT;
	v->a[16929] = anon_sym_GT;
	v->a[16930] = anon_sym_GT_GT;
	v->a[16931] = anon_sym_LT_LT;
	v->a[16932] = aux_sym_heredoc_redirect_token1;
	v->a[16933] = anon_sym_SEMI;
	v->a[16934] = 14;
	v->a[16935] = actions(3);
	v->a[16936] = 1;
	v->a[16937] = sym_comment;
	v->a[16938] = actions(25);
	v->a[16939] = 1;
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16941] = actions(27);
	v->a[16942] = 1;
	v->a[16943] = anon_sym_DOLLAR;
	v->a[16944] = actions(29);
	v->a[16945] = 1;
	v->a[16946] = anon_sym_DQUOTE;
	v->a[16947] = actions(33);
	v->a[16948] = 1;
	v->a[16949] = anon_sym_DOLLAR_LBRACE;
	v->a[16950] = actions(35);
	v->a[16951] = 1;
	v->a[16952] = anon_sym_DOLLAR_LPAREN;
	v->a[16953] = actions(37);
	v->a[16954] = 1;
	v->a[16955] = anon_sym_BQUOTE;
	v->a[16956] = actions(413);
	v->a[16957] = 1;
	v->a[16958] = sym__bare_dollar;
	v->a[16959] = actions(527);
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = 1;
	v->a[16961] = ts_builtin_sym_end;
	v->a[16962] = state(175);
	v->a[16963] = 1;
	v->a[16964] = aux_sym_command_repeat2;
	v->a[16965] = state(564);
	v->a[16966] = 1;
	v->a[16967] = sym_concatenation;
	v->a[16968] = actions(409);
	v->a[16969] = 3;
	v->a[16970] = sym_raw_string;
	v->a[16971] = sym_number;
	v->a[16972] = sym_word;
	v->a[16973] = state(273);
	v->a[16974] = 5;
	v->a[16975] = sym_arithmetic_expansion;
	v->a[16976] = sym_string;
	v->a[16977] = sym_simple_expansion;
	v->a[16978] = sym_expansion;
	v->a[16979] = sym_command_substitution;
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = actions(450);
	v->a[16981] = 10;
	v->a[16982] = anon_sym_PIPE;
	v->a[16983] = anon_sym_SEMI_SEMI;
	v->a[16984] = anon_sym_AMP_AMP;
	v->a[16985] = anon_sym_PIPE_PIPE;
	v->a[16986] = anon_sym_LT;
	v->a[16987] = anon_sym_GT;
	v->a[16988] = anon_sym_GT_GT;
	v->a[16989] = anon_sym_LT_LT;
	v->a[16990] = aux_sym_heredoc_redirect_token1;
	v->a[16991] = anon_sym_SEMI;
	v->a[16992] = 13;
	v->a[16993] = actions(3);
	v->a[16994] = 1;
	v->a[16995] = sym_comment;
	v->a[16996] = actions(99);
	v->a[16997] = 1;
	v->a[16998] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16999] = actions(101);
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
