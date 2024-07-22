/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_679.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3395(t_small_parse_table_array *v)
{
	v->a[67900] = actions(409);
	v->a[67901] = 1;
	v->a[67902] = anon_sym_DQUOTE;
	v->a[67903] = actions(411);
	v->a[67904] = 1;
	v->a[67905] = anon_sym_DOLLAR_LBRACE;
	v->a[67906] = actions(413);
	v->a[67907] = 1;
	v->a[67908] = anon_sym_DOLLAR_LPAREN;
	v->a[67909] = actions(415);
	v->a[67910] = 1;
	v->a[67911] = anon_sym_BQUOTE;
	v->a[67912] = actions(2554);
	v->a[67913] = 1;
	v->a[67914] = sym__bare_dollar;
	v->a[67915] = actions(2709);
	v->a[67916] = 1;
	v->a[67917] = anon_sym_DOLLAR;
	v->a[67918] = actions(2552);
	v->a[67919] = 5;
	small_parse_table_3396(v);
}

void	small_parse_table_3396(t_small_parse_table_array *v)
{
	v->a[67920] = aux_sym_concatenation_token1;
	v->a[67921] = sym_raw_string;
	v->a[67922] = sym_number;
	v->a[67923] = sym__comment_word;
	v->a[67924] = sym_word;
	v->a[67925] = state(565);
	v->a[67926] = 5;
	v->a[67927] = sym_arithmetic_expansion;
	v->a[67928] = sym_string;
	v->a[67929] = sym_simple_expansion;
	v->a[67930] = sym_expansion;
	v->a[67931] = sym_command_substitution;
	v->a[67932] = 12;
	v->a[67933] = actions(3);
	v->a[67934] = 1;
	v->a[67935] = sym_comment;
	v->a[67936] = actions(2331);
	v->a[67937] = 1;
	v->a[67938] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67939] = actions(2335);
	small_parse_table_3397(v);
}

void	small_parse_table_3397(t_small_parse_table_array *v)
{
	v->a[67940] = 1;
	v->a[67941] = anon_sym_DQUOTE;
	v->a[67942] = actions(2337);
	v->a[67943] = 1;
	v->a[67944] = anon_sym_DOLLAR_LBRACE;
	v->a[67945] = actions(2339);
	v->a[67946] = 1;
	v->a[67947] = anon_sym_DOLLAR_LPAREN;
	v->a[67948] = actions(2341);
	v->a[67949] = 1;
	v->a[67950] = anon_sym_BQUOTE;
	v->a[67951] = actions(2567);
	v->a[67952] = 1;
	v->a[67953] = anon_sym_DOLLAR;
	v->a[67954] = actions(2641);
	v->a[67955] = 1;
	v->a[67956] = sym__comment_word;
	v->a[67957] = actions(2643);
	v->a[67958] = 1;
	v->a[67959] = sym__empty_value;
	small_parse_table_3398(v);
}

void	small_parse_table_3398(t_small_parse_table_array *v)
{
	v->a[67960] = state(700);
	v->a[67961] = 1;
	v->a[67962] = sym_concatenation;
	v->a[67963] = actions(2711);
	v->a[67964] = 3;
	v->a[67965] = sym_raw_string;
	v->a[67966] = sym_number;
	v->a[67967] = sym_word;
	v->a[67968] = state(513);
	v->a[67969] = 5;
	v->a[67970] = sym_arithmetic_expansion;
	v->a[67971] = sym_string;
	v->a[67972] = sym_simple_expansion;
	v->a[67973] = sym_expansion;
	v->a[67974] = sym_command_substitution;
	v->a[67975] = 3;
	v->a[67976] = actions(3);
	v->a[67977] = 1;
	v->a[67978] = sym_comment;
	v->a[67979] = actions(2153);
	small_parse_table_3399(v);
}

void	small_parse_table_3399(t_small_parse_table_array *v)
{
	v->a[67980] = 2;
	v->a[67981] = sym_file_descriptor;
	v->a[67982] = aux_sym_heredoc_redirect_token1;
	v->a[67983] = actions(2155);
	v->a[67984] = 15;
	v->a[67985] = anon_sym_esac;
	v->a[67986] = anon_sym_PIPE;
	v->a[67987] = anon_sym_SEMI_SEMI;
	v->a[67988] = anon_sym_AMP_AMP;
	v->a[67989] = anon_sym_PIPE_PIPE;
	v->a[67990] = anon_sym_LT;
	v->a[67991] = anon_sym_GT;
	v->a[67992] = anon_sym_GT_GT;
	v->a[67993] = anon_sym_LT_AMP;
	v->a[67994] = anon_sym_GT_AMP;
	v->a[67995] = anon_sym_GT_PIPE;
	v->a[67996] = anon_sym_LT_GT;
	v->a[67997] = anon_sym_LT_LT;
	v->a[67998] = anon_sym_LT_LT_DASH;
	v->a[67999] = anon_sym_SEMI;
	small_parse_table_3400(v);
}

/* EOF small_parse_table_679.c */
